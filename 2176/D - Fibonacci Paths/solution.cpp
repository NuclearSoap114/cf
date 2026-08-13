#include <bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i,l,r) for(int i=(l);i<=(r);i++)
#define rep_(i,l,r) for(int i=(l);i>=(r);i--)
#define all() a.begin() + 1,a.begin() + n + 1
#define pii pair<int,int>
#define V vector
#define F first
#define S second
#define pb push_back
#define is insert
const int inf = 1LL << 62,N = 2e5 + 10,mod = 998244353;
const double pi = acos(-1);
// --------------- AC ---------------
int T,n,m;
V<int> G[N];
 
struct Edge{
    int from,to,weight;
};
 
void O_o(){
    int ans = 0;
    cin >> n >> m;
    rep(i,0,n){
        G[i].clear();
    }
    V<map<int,int>> sum(n + 1);
    V<int> a(n + 1);
    V<Edge> e;
    rep(i,1,n)cin >> a[i];
    rep(i,1,m){
        int u,v;cin >> u >> v;
        G[u].pb(v);
        e.pb({u,v,a[u] + a[v]});
    }
    sort(e.begin(),e.end(),[&](Edge a,Edge b) -> bool {
        return a.weight > b.weight;
    });
    for(auto [u,v,w] : e){
        int cur = (1 + sum[v][a[u] + a[v]]) % mod;
        ans = (ans + sum[v][a[u] + a[v]] + 1) % mod;
        sum[u][a[v]] = (sum[u][a[v]] + cur) % mod;
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