#include <bits/stdc++.h>
using namespace  std;
#define int long long
const int N = 2e5 + 10,inf = 1e18;
int T,n,m,p[N],aa[N],bb[N],cc[N],pref[N],a,b,c,ans;
vector<int> G[N];
 
void bfs(int u,int x[]){
    queue<int> q;
    q.push(u);
    x[u] = 0;
    while(!q.empty()){
        int v = q.front();
        q.pop();
        for(int w : G[v]){
            if(x[w] == inf){
                x[w] = x[v] + 1;
                q.push(w);
            }
        }
    }
}
 
void O_o(){
    cin >> n >> m >> a >> b >> c;
    ans = inf;
    for(int i=0;i<=n;i++){
        G[i].clear();
        aa[i] = bb[i] = cc[i] = inf;
        pref[i] = 0;
    }
    for(int i=1;i<=m;i++){
        cin >> p[i];
    }
    for(int i=1;i<=m;i++){
        int u,v;cin >> u >> v;
        G[u].push_back(v);
        G[v].push_back(u);
    }
    sort(p + 1,p + m + 1);
    for(int i=1;i<=m;i++){
        pref[i] = pref[i - 1] + p[i];
    }
    bfs(a,aa);
    bfs(b,bb);
    bfs(c,cc);
    for(int i=1;i<=n;i++){
        int sum = aa[i] + bb[i] + cc[i];
        if(sum > m || bb[i] > m)continue;
        ans = min(ans,pref[sum] + pref[bb[i]]);
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