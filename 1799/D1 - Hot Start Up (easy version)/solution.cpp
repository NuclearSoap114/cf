#include <bits/stdc++.h>
using namespace std;
#define int long long 
const int N = 5e3 + 10,inf = 1e18;
int n,a[N],h[N],c[N],k,T,dp[N][N];
 
void O_o(){
    cin >> n >> k;
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    for(int i=1;i<=k;i++){
        cin >> c[i];
    }
    for(int i=1;i<=k;i++){
        cin >> h[i];
    }
    for(int i=0;i<=n;i++){
        for(int j=0;j<=k;j++){
            dp[i][j] = inf;
        }
    }
    dp[1][0] = c[a[1]];
    // 已经运行完前 i 个程序，
    // 其中一个 CPU 最后运行的是 a[i]，另一个 CPU 最后运行的是 j 的最小总时间。
 
    for(int i=1;i<n;i++){
        for(int j=0;j<=k;j++){
            int x = a[i],y = j,z = a[i + 1];
            if(dp[i][j] == inf)continue;
            // x
            int c1 = x == z ? h[z] : c[z];
            dp[i + 1][y] = min(dp[i + 1][y],dp[i][j] + c1);
            // y
            int c2 = y == z ? h[z] : c[z];
            dp[i + 1][x] = min(dp[i + 1][x],dp[i][j] + c2);
        }
    }
    int ans = inf;
    for(int i=0;i<=k;i++){
        ans = min(ans,dp[n][i]);
    }
    cout << ans << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    cin >> T;
    while(T--)O_o();
    return 0;
}