#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 2e5 + 10,inf = 2e14 + 10;
int T,n,s;
 
struct node{
    int l,r;
};
 
void O_o(){
    cin >> n >> s;
    vector<node> a(n + 1);
    int base = 0;
    for(int i = 1;i <= n;i++){
        cin >> a[i].l >> a[i].r;
        base += a[i].l;
    }
 
    sort(a.begin() + 1,a.begin() + n + 1,[&](node x,node y) -> bool {
        if(x.l != y.l) return x.l < y.l;
        return x.r < y.r;
    });
 
    int mid = n / 2 + 1;
 
    auto ok = [&](int x) -> bool {
        int cnt = 0,S = s - base;
        for(int i = 1;i <= n;i++){
            if(a[i].l >= x)cnt++;
        }
        int need = mid - cnt;
        if(need <= 0)return 1;
        priority_queue<int,vector<int>,greater<int>> pq;
        for(int i = 1;i <= n;i++){
            if(a[i].l < x && a[i].r >= x){
                pq.push(x - a[i].l);
            }
        }
        while(!pq.empty()){
            int now = pq.top();
            pq.pop();
            S -= now;
            if(S < 0)return 0;
            need--;
            if(need <= 0)return 1;
        }
        return 0;
    };
 
    int L = -1,R = inf;
    while(L + 1 != R){
        int M = L + R >> 1;
        if(ok(M))L = M;
        else R = M;
    }
    cout << L << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> T;
    while(T--)O_o();
    return 0;
}