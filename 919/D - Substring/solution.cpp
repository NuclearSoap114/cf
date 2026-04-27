#include <bits/stdc++.h>
using namespace std;
#define int long long
inline void fmx(int &a,int b){ if(a<b) a=b;}
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define _rep(i,a,b) for(int i=b;i>=a;i--)
#define all() a.begin() + 1,a.begin() + n + 1
const int inf = 1e18,N = 300010;
int n,m,indeg[N],dp[N][28];
vector<int> G[N];
char a[N];
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    cin >> n >> m;
    for(int i=1;i<=n;i++){
        cin >> a[i];
        dp[i][a[i] - 'a' + 1]++;
    }
    for(int i=1;i<=m;i++){
        int u,v;cin >> u >> v;
        G[u].push_back(v);
        indeg[v]++;
    }
    queue<int> q;
    for(int i=1;i<=n;i++){
        if(!indeg[i]){
            q.push(i);
        }
    }
    while(!q.empty()){
        int u = q.front();
        q.pop();
        for(auto &v : G[u]){
            for(int i=1;i<=26;i++){
                if(a[v] - 'a' + 1 == i){
                    dp[v][i] = max(dp[v][i],dp[u][i] + 1);
                }else{
                    dp[v][i] = max(dp[v][i],dp[u][i]);
                }
            }
            indeg[v]--;
            if(indeg[v] == 0){
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
    int ans = -1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=26;j++){
            ans = max(ans,dp[i][j]);
        }
    }
    cout << ans << '
';
    return 0;
}