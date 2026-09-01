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
int T,n,dep[N],fa[N],mx_id,mx_dep;
bool on[N];
V<int> G[N];
 
void dfs(int u,int f){
    fa[u] = f;
    if(dep[u] > mx_dep){
        mx_dep = dep[u];
        mx_id = u;
    }
 
    for(int v : G[u]){
        if(v == f)continue;
        dep[v] = dep[u] + 1;
        dfs(v,u);
    }
}
 
int mx3,mxt;
 
void dfs2(int u,int f,int d){
    if(d > mxt){
        mxt = d;
        mx3 = u;
    }
 
    for(int v : G[u]){
        if(v == f || on[v])continue;
        dfs2(v,u,d + 1);
    }
}
 
void O_o(){
    cin >> n;
    rep(i,1,n - 1){
        int u,v;cin >> u >> v;
        G[u].pb(v);
        G[v].pb(u);
    }
 
    mx_dep = -1;
    dep[1] = 0;
    dfs(1,0);
    int mx1 = mx_id;
 
    mx_dep = -1;
    dep[mx1] = 0;
    dfs(mx1,0);
    int mx2 = mx_id;
    int dm = mx_dep;
 
    for(int u=mx2;u;u=fa[u]){
        on[u] = 1;
        if(u == mx1)break;
    }
 
    mx3 = -1;
    mxt = -1;
 
    rep(u,1,n){
        if(!on[u])continue;
        for(int v : G[u]){
            if(on[v])continue;
            dfs2(v,u,1);
        }
    }
 
    if(mx3 == -1){
        rep(i,1,n){
            if(i != mx1 && i != mx2){
                mx3 = i;
                break;
            }
        }
        mxt = 0;
    }
 
    cout << dm + mxt << '
';
    cout << mx1 << ' ' << mx2 << ' ' << mx3 << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    T = 1;
    while(T--)O_o();
    return 0;
}