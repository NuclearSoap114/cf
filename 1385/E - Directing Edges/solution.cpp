#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 2e5 + 10;
int T,n,m,pos[N],vis[N];
vector<int> G[N],ord;
vector<pair<int,int>> edges;
 
void dfs(int u){
    vis[u] = 1;
    for(int v : G[u]){
        if(!vis[v])dfs(v);
    }
    ord.push_back(u);
}
 
void O_o(){
    cin >> n >> m;
    ord.clear();
    edges.clear();
    for(int i=1;i<=n;i++){
        G[i].clear();
        pos[i] = 0;
        vis[i] = 0;
    }
    for(int i=1;i<=m;i++){
        int op,u,v;cin >> op >> u >> v;
        if(op){
            G[u].push_back(v);
        }
        edges.push_back({u,v});
    }
    for(int i=1;i<=n;i++){
        if(!vis[i])dfs(i);
    }
    reverse(ord.begin(),ord.end());
    for(int i=1;i<=n;i++){
        pos[ord[i - 1]] = i;
    }
    for(int u=1;u<=n;u++){
        for(int v : G[u]){
            if(pos[u] > pos[v]){
                cout << "NO" << '
';
                return ;
            }
        }
    }
    cout << "YES" << '
';
    for (auto [x, y] : edges){
        if(pos[x] < pos[y]){
            cout << x << " " << y << '
';
        }else{
            cout << y << " " << x << '
';
        }
    }
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> T;
    while(T--)O_o();
    return 0;
}