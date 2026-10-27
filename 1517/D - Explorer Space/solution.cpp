#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 510,inf = 1e18;
int h[N][N],v[N][N],n,m,k,dp[N][N][22];
 
void O_o(){
    cin >> n >> m >> k;
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= m - 1;j++){
            cin >> h[i][j];
        }
    }
 
    for(int i = 1;i <= n - 1;i++){
        for(int j = 1;j <= m;j++){
            cin >> v[i][j];
        }
    }
 
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= m;j++){
            for(int kk = 0;kk <= k;kk++){
                if(kk == 0)dp[i][j][kk] = 0;
                else dp[i][j][kk] = inf;
            }
        }
    }
 
    if(k & 1){
        for(int i = 1;i <= n;i++){
            for(int j = 1;j <= m;j++){
                cout << -1 << ' ';
            }
            cout << '
';
        }
        return;
    }
 
    for(int cnt = 1;cnt <= k / 2;cnt++){
        for(int i = 1;i <= n;i++){
            for(int j = 1;j <= m;j++){
                if(i > 1)
                    dp[i][j][cnt] = min(dp[i][j][cnt],dp[i - 1][j][cnt - 1] + v[i - 1][j]);
                if(i < n)
                    dp[i][j][cnt] = min(dp[i][j][cnt],dp[i + 1][j][cnt - 1] + v[i][j]);
                if(j > 1)
                    dp[i][j][cnt] = min(dp[i][j][cnt],dp[i][j - 1][cnt - 1] + h[i][j - 1]);
                if(j < m)
                    dp[i][j][cnt] = min(dp[i][j][cnt],dp[i][j + 1][cnt - 1] + h[i][j]);
            }
        }
    }
 
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= m;j++){
            cout << (dp[i][j][k / 2] >= inf / 2 ? -1 : dp[i][j][k / 2] * 2) << ' ';
        }
        cout << '
';
    }
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    O_o();
    return 0;
}