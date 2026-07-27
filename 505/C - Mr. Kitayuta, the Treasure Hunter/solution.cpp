#include <bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i,l,r) for(int i=(l);i<=(r);i++)
const int inf = 1e18,N = 3e4 + 10;
int n,dp[N][600],d,a[N];
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> d;
    rep(i,1,n){
        int x;cin >> x;
        a[x]++;
    }
    int upset = 260;
    rep(i,0,N - 1){
        rep(j,0,599){
            dp[i][j] = -inf;
        }
    }
    dp[d][upset] = a[d];
    int ans = a[d];
    rep(i,d + 1,N-1){
        rep(j,-255,255){
            int step = d + j;
            if(i - step < 0 || step <= 0)continue;
            dp[i][j + upset] = max({dp[i - step][j - 1 + upset],dp[i - step][j + 1 + upset],dp[i - step][j + upset]}) + a[i];
            ans = max(ans,dp[i][j + upset]);
        }
    }
    cout << ans << '
';
    return 0;
}