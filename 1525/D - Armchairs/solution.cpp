#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 5005,inf = 0x3f3f3f3f3f3f3f3f;
int n;
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    cin >> n;
    vector<int> a(n + 1),pos(1,0);
    for(int i=1;i<=n;i++){
        cin >> a[i];
        if(a[i]){
            pos.push_back(i);
        }
    }
    int k = pos.size() - 1;
    vector<vector<int>> dp(n + 1,vector<int>(pos.size() + 2,inf));
    dp[0][0] = 0;
    for(int i=1;i<=n;i++){
        for(int j=0;j<=k;j++){
            dp[i][j] = min(dp[i][j],dp[i - 1][j]);
            if(a[i] == 0 && j >= 1){
                dp[i][j] = min(dp[i][j],dp[i - 1][j - 1] + abs(i - pos[j]));
            }
        }
    }
    cout << dp[n][k] << '
';
    return 0;
}