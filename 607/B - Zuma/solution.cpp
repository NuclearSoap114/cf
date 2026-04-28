#include <bits/stdc++.h>
using namespace std;
 
#define int long long
 
const int N = 505;
const int INF = 1e18;
 
int n;
int dp[N][N];
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    cin >> n;
 
    vector<int> s(n + 1);
 
    for(int i = 1; i <= n; i++){
        cin >> s[i];
    }
 
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            dp[i][j] = INF;
        }
    }
 
    for(int i = 1; i <= n; i++){
        dp[i][i] = 1;
    }
 
    for(int len = 2; len <= n; len++){
        for(int l = 1; l + len - 1 <= n; l++){
            int r = l + len - 1;
 
            if(s[l] == s[r]){
                if(len == 2){
                    dp[l][r] = 1;
                }else{
                    dp[l][r] = dp[l + 1][r - 1];
                }
            }
 
            for(int k = l; k < r; k++){
                dp[l][r] = min(dp[l][r], dp[l][k] + dp[k + 1][r]);
            }
        }
    }
 
    cout << dp[1][n] << '
';
 
    return 0;
}