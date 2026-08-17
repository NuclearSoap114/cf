#include <bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i,l,r) for(int i=(l);i<=(r);i++)
#define rep_(i,l,r) for(int i=(l);i>=(r);i--)
#define all(i) i.begin() + 1,i.begin() + n + 1
#define pii pair<int,int>
#define V vector
#define F first
#define S second
#define pb push_back
#define is insert
const int inf = 1LL << 62,N = 2e5 + 10;
const double pi = acos(-1);
int T,n,k;
 
void O_o(){
    cin >> n >> k;
    V<int> pre(n + 1);
    rep(i,1,n){
        int x;
        cin >> x;
        pre[i] = pre[i - 1] + (x <= k ? 1 : -1);
    }
 
    int mn = inf;     
    int mn_good = inf;
    rep(r,2,n - 1){
        int l = r - 1;
        mn = min(mn,pre[l]);
        if(pre[l] >= 0){
            mn_good = min(mn_good,pre[l]);
        }
 
        if(mn_good <= pre[r]){
            cout << "YES" << ' ';
            return;
        }
 
        if(mn_good != inf && pre[r] <= pre[n]){
            cout << "YES" << ' ';
            return;
        }
        if(mn <= pre[r] && pre[r] <= pre[n]){
            cout << "YES" << ' ';
            return;
        }
    }
 
    cout << "NO" << ' ';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> T;
    while(T--)O_o();
    return 0;
}