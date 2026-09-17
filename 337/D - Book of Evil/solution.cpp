#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e5 + 10;
int T,n,m,d,p[N],depx[N],depy[N];
vector<int> G[N];
int x = - 1,y = -1,mxd = -1e18;
unordered_set<int> st;
 
void dfs(int u,int fa,int dis){
    if(st.count(u) && dis > mxd){
        mxd = dis;
        x = u;
    }
    for(int v : G[u]){
        if(v == fa)continue;
        dfs(v,u,dis + 1);
    }
}
 
void dfs2(int u,int fa,int dis){
    if(st.count(u) && dis > mxd){
        mxd = dis;
        y = u;
    }
    for(int v : G[u]){
        if(v == fa)continue;
        dfs(v,u,dis + 1);
    }
}
 
void dfs_dep(int u,int fa,int op,int dep){
    if(op == 1){
        depx[u] = dep;
    }else{
        depy[u] = dep;
    }
    for(int v : G[u]){
        if(v == fa)continue;
        dfs_dep(v,u,op,dep + 1);
    }
}
 
void O_o(){
    cin >> n >> m >> d;
 
    for(int i = 1;i <= m;i++){
        cin >> p[i];
        st.insert(p[i]);
    }
 
    for(int i = 1;i <= n - 1;i++){
        int u,v;cin >> u >> v;
        G[u].push_back(v);
        G[v].push_back(u);
    }
 
    dfs(p[1],0,0);
    mxd = -1e18;
    dfs2(x,0,0);
 
    dfs_dep(x,0,1,0);
    dfs_dep(y,0,0,0);
 
    int ans = 0;
    for(int i = 1;i <= n;i++){
        if(depx[i] <= d && depy[i] <= d){
            ans++;
        }
    }
 
    cout << ans << '
';
} 
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    T = 1;
    while(T--)O_o();
    return 0;
}