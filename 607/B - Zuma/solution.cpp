#include <bits/stdc++.h>
using namespace std;
#define int long long
inline void fmx(int &a,int b){ if(a<b) a=b;}
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define _rep(i,a,b) for(int i=b;i>=a;i--)
#define all() a.begin() + 1,a.begin() + n + 1
const int inf = 1e18,N = 505;
int ans = inf,n,dp[N][N];
string s;
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    int n;cin >> n;
    vector<int> s(n + 1);
    for(int i=1;i<=n;i++){
        cin >> s[i];
    }
    memset(dp,0x3f3f,sizeof(dp));
    for(int i=1;i<=n;i++){
        dp[i][i] = 1;
    }
    for(int len=1;len<=n;len++){
        for(int l=1;l+len<=n;l++){
            int r = l + len;
            if(l + 1 == r && s[l] == s[r]){
                dp[l][r] = 1;
            }
            if(s[l] == s[r]){
                dp[l][r] = min(dp[l][r],dp[l + 1][r - 1]);
            }
            if(s[l] == s[r - 1]){
                dp[l][r] = min(dp[l][r],dp[l + 1][r] + 1);
            }
            if(s[l + 1] == s[r]){
                dp[l][r] = min(dp[l][r],dp[l][r - 1] + 1);
            }
            dp[l][r] = min(dp[l][r],dp[l + 1][r - 1] + 2);
            for(int k=l;k<=r;k++){
                dp[l][r] = min(dp[l][r],dp[l][k] + dp[k + 1][r]);
            }
        }
    }
    cout << dp[1][n] << '
';
    return 0;
}