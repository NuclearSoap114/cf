#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MAXN = 2e5 + 10;
int T,n;
vector<int> a,G[MAXN],t,m;
void dfs(int x,int fa){
    for(auto &v : G[x]){
        if(v == fa) continue;
        t[v] = max(a[v],a[v] - m[x]);
        m[v] = min(a[v],a[v] - t[x]);
        dfs(v,x);
    }
}
void O_o(){
    cin >> n;
    a.resize(n + 1);
    m.resize(n + 1);
    t.resize(n + 1);
    for(int i=1;i<=n;i++){
        cin >> a[i];
        G[i].clear();
    }
    for(int i=1;i<=n - 1;i++){
        int u,v;cin >> u >> v;
        G[u].push_back(v);
        G[v].push_back(u);
    }
    t[1] = m[1] = a[1];
    dfs(1,0);
    for(int i=1;i<=n;i++){
        cout << t[i] << ' ';
    }
    cout << '
';
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    cin >> T;
    while(T--)O_o();
    return 0;
}