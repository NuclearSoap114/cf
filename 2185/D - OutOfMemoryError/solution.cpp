#include <bits/stdc++.h>
using namespace std;
#define int long long
#define go(i,a,b) for(int i=a;i<=b;i++)
#define og(i,a,b) for(int i=b;i>=a;i--)
int T,n,m,k;
 
void O_o(){
    cin >> n >> m >> k;
    vector<int> a(n + 1);
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    auto ori = a;
    int mx = -1;
    vector<int> upd(n + 1,-1);
    for(int i=1;i<=m;i++){
        int b,c;cin >> b >> c;
        if(upd[b] < mx){
            a[b] = ori[b];
        }
        a[b] += c;
        if(a[b] > k){
            mx = i;
            a[b] = ori[b];
        }
        upd[b] = i;
    }   
    for(int i=1;i<=n;i++){
        if(upd[i] < mx)a[i] = ori[i];
        cout << a[i] << ' ';
    }
    cout << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    cin >> T;
    while(T--)O_o();
}