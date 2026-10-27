#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1010,inf = 1e18;
int n,k,a[6][N],pos[6][N];
vector<int> G[N];
 
void O_o(){
    cin >> n >> k;
    for(int i = 1;i <= k;i++){
        for(int j = 1;j <= n;j++){
            cin >> a[i][j];
            pos[i][a[i][j]] = j;
        }
    }
 
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= n;j++){
            if(i == j)continue;
            bool ok = 1;
            for(int kk = 1;kk <= k;kk++){
                if(pos[kk][i] > pos[kk][j]){
                    ok = 0;
                    break;
                }
            }
            if(ok){
                G[i].push_back(j);
            }
        }
    }
 
    vector<int> dp(n + 1,1);
    int ans = 1;
    for(int i = 1;i <= n;i++){
        int u = a[1][i];
        for(int v : G[u]){
            dp[v] = max(dp[v],dp[u] + 1);
            ans = max(ans,dp[v]);
        }
    }
 
    cout << ans << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    O_o();
    return 0;
}