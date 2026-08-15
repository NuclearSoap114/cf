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
// --------------- AC ---------------
int T,n,a[N],m,mid;
V<pii> G[N];
 
bool dfs(int u,int now){
    if(u == n)return true;
    bool res = 0;
    for(auto [w,v] : G[u]){
        if(now >= w){
            res |= dfs(v,min(mid,now + a[v]));
        }
    }
    return res;
}
 
bool check(){
    V<int> best(n + 1,-1);
    best[1] = min(mid,a[1]);
    rep(u,1,n){
        if(best[u] == -1)continue;
        for(auto [w,v] : G[u]){
            if(best[u] >= w){
                best[v] = max(best[v],min(mid,best[u] + a[v]));
            }
        }
    }
    return best[n] != -1;
}
 
void O_o(){
    cin >> n >> m;
    rep(i,0,n){
        G[i].clear();
    }
    rep(i,1,n)cin >> a[i];
    int tot = accumulate(a + 1,a + n + 1,0LL);
    rep(i,1,m){
        int u,v,w;cin >> u >> v >> w;
        G[u].pb({w,v});
    }
    int l = -1,r = tot + 1;
    while(l + 1 != r){
        mid = l + r >> 1;
        if(check())r = mid;
        else l = mid;
    }
    cout << (r == tot + 1 ? -1 : r) << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> T;
    while(T--)O_o();
    return 0;
}