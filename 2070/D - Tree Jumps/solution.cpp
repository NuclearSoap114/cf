#include <bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i,l,r) for(int i=(l);i<=(r);i++)
#define all() a.begin() + 1,a.begin() + n + 1
#define pii pair<int,int>
#define V vector
#define F first
#define S second
#define pb push_back
#define is insert
const int inf = 1LL << 62,N = 3e5 + 10,mod = 998244353;
const double pi = acos(-1);
// --------------- AC ---------------
int T,n,dep[N],f[N],sum[N],p[N];
V<int> G[N],layer[N];
 
void dfs(int u,int d){
    dep[u] = d;
    layer[d].pb(u);
    for(int v : G[u]){
        dfs(v,d + 1);
    }
}
 
void O_o(){
    int ans = 1;
    cin >> n;
    rep(i,0,n){
        G[i].clear();
        layer[i].clear();
        f[i] = 0;
        sum[i] = 0;
    }
    f[1] = 1;
    sum[0] = 1;
    rep(i,2,n){
        cin >> p[i];
        G[p[i]].pb(i);
    }
    dfs(1,0);
    rep(d,1,n - 1){
        if(layer[d].empty())break;
        for(int u : layer[d]){
            if(d == 1){
                f[u] = 1;
            }else{
                f[u] = (sum[d - 1] - f[p[u]] + mod) % mod;
            }
            sum[d] = (sum[d] + f[u]) % mod;
            ans = (ans + f[u]) % mod;
        }
    }
    cout << ans << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> T;
    while(T--)O_o();
    return 0;
}