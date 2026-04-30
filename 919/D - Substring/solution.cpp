#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 3e5 + 10;
int n,m,indeg[N],dp[N][28],ans = -1;
char c[N];
vector<int> G[N];
queue<int> q;
 
signed main(){
    cin >> n >> m;
    for(int i=1;i<=n;i++){
        cin >> c[i];
        dp[i][c[i] - 'a' + 1]++;
    }
    for(int i=1;i<=m;i++){
        int u,v;cin >> u >> v;
        G[u].push_back(v);
        indeg[v]++;
    }
    for(int i=1;i<=n;i++){
        if(!indeg[i]){
            q.push(i);
        }
    }
    while(!q.empty()){
        int u = q.front();
        q.pop();
        for(int v : G[u]){
            for(int i=1;i<=26;i++){
                char ch = 'a' + i - 1;
                if(c[v] == ch){
                    dp[v][i] = max(dp[v][i],dp[u][i] + 1);
                }else{
                    dp[v][i] = max(dp[v][i],dp[u][i]);
                }
            }
            indeg[v]--;
            if(indeg[v] <= 0){
                q.push(v);
            }
        }
    }
    for(int i=1;i<=n;i++){
        if(indeg[i]){
            cout << -1 << '
';
            return 0;
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=26;j++){
            ans = max(ans,dp[i][j]);
        }
    }
    cout << ans << '
';
    return 0;
}