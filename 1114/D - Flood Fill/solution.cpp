#include <bits/stdc++.h>
using namespace std;
#define int long long 
const int inf = 1e18;
int n,dp[5005][5005];
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    vector<int> a(1,-1);
    for(int i=1;i<=n;i++){
        int x;cin >> x;
        if(x != a.back())a.push_back(x);
    }
    n = a.size() - 1;
    for(int i=0;i<=5002;i++){
        for(int j=0;j<5002;j++){
            dp[i][j] = inf;
        }
    }
    for(int i=1;i<=5003;i++){
        dp[i][i] = 0;
    }
    for(int len=1;len<=n;len++){
        for(int l=1;l+len<=n;l++){
            int r = l + len;
            if(a[l] == a[r]){
                dp[l][r] = dp[l + 1][r - 1] + 1;
            }else{
                dp[l][r] = min(dp[l + 1][r],dp[l][r - 1]) + 1;
            }
        }
    }
    cout << dp[1][n] << '
';
    return 0;
}