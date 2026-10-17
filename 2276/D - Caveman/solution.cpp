#include <bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i,l,r) for(int i=(l);i<=(r);i++)
const int N = 3e5 + 10;
int T,n,m,d[N];
 
void O_o(){
    cin >> n >> m;
    rep(i,1,n)d[i] = 0;
 
    rep(i,1,m){
        int u,v;cin >> u >> v;
        d[u]++;
        d[v]++;
    }
 
    int mx = 0;
    bool ok = 0;
    rep(i,1,n){
        if(d[i] == 0)ok = 1;
        mx = max(mx,d[i]);
    }
 
    if(ok){
        cout << "Brain Melt" << '
';
    }else if(mx == n - 1 && m == n - 1){
        cout << 2 << '
';
    }else{
        cout << "Many" << '
';
    }
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> T;
    while(T--)O_o();
    return 0;
}