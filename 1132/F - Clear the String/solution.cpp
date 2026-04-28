#include <bits/stdc++.h>
using namespace std;
#define int long long
inline void fmx(int &a,int b){ if(a<b) a=b;}
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define _rep(i,a,b) for(int i=b;i>=a;i--)
#define all() a.begin() + 1,a.begin() + n + 1
const int inf = 1e18,N = 505;
int n,dp[N][N];
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    cin >> n;
    vector<char> a(1,'#');
    for(int i=1;i<=n;i++){
        char c;cin >> c;
        if(c != a.back()){
            a.push_back(c);
        }
    }
    n = a.size() - 1;
    memset(dp,0x3f3f,sizeof(dp));
    for(int i=1;i<=n;i++){
        dp[i][i] = 1;
    }
    for(int len=0;len<=n;len++){
        for(int l=1;l<=n;l++){
            int r = l + len;
            if(r > n)break;
            dp[l][r] = min(dp[l][r],dp[l + 1][r] + 1);
            if(a[l] == a[r]){
                dp[l][r] = min(dp[l][r],dp[l + 1][r]);
            }
            for(int k=l;k<r;k++){
                dp[l][r] = min(dp[l][r],dp[l][k] + dp[k + 1][r]);
            }
        }
    }
    cout << dp[1][n] << '
';
    return 0;
}