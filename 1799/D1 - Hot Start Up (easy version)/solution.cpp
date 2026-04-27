#include <bits/stdc++.h>
using namespace std;
#define int long long
inline void fmx(int &a,int b){ if(a<b) a=b;}
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define _rep(i,a,b) for(int i=b;i>=a;i--)
#define all() a.begin() + 1,a.begin() + n + 1
const int inf = 1e18,N = 5005,K = 5005;
int T,n,k,dp[N][K];
// 已经运行完前 i 个程序，
// 其中一个 CPU 最后运行的是 a[i]，另一个 CPU 最后运行的是 j 的最小总时间。
 
 
void O_o(){
    cin >> n >> k;
    vector<int> a(n + 1,0),c(k + 1,0),h(k + 1,0);
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    for(int i=1;i<=k;i++){
        cin >> c[i];
    }
    for(int i=1;i<=k;i++){
        cin >> h[i];
    }
    // init
    for(int i=0;i<=n;i++){
        for(int j=0;j<=k;j++){
            dp[i][j] = inf;
        }
    }
    dp[1][0] = c[a[1]];
    // dp
    for(int i=1;i<n;i++){
        int z = a[i + 1];
        int x = a[i];
        for(int j=0;j<=k;j++){
            int y = j;
            if(dp[i][j] == inf)continue;
            int c1 = (x == z ? h[z] : c[z]);
            dp[i + 1][j] = min(dp[i + 1][j], dp[i][j] + c1);
            int c2 = (y == z ? h[z] : c[z]);
            dp[i + 1][x] = min(dp[i + 1][x], dp[i][j] + c2);
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
}