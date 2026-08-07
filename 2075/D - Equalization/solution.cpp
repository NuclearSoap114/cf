#include <bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i,l,r) for(int i=(l);i<=(r);i++)
#define all() a.begin() + 1,a.begin() + n + 1
#define pii pair<int,int>
#define V vector
#define F first
#define S second
#define pb push_back
#define is insert
const int inf = 1LL << 62,N = 2e5 + 10;
const double pi = acos(-1);
// --------------- AC ---------------
int T,x,y;
int dp[61][61];
 
void init(){
    rep(i,0,60){
        rep(j,0,60){
            dp[i][j] = inf;
        }
    }
    dp[0][0] = 0;
 
    rep(k,1,60){
        int w = 1LL << k;
 
        for(int i = 60;i >= 0;i--){
            for(int j = 60;j >= 0;j--){
                if(dp[i][j] == inf)continue;
 
                if(i + k <= 60){
                    dp[i + k][j] = min(dp[i + k][j],dp[i][j] + w);
                }
                if(j + k <= 60){
                    dp[i][j + k] = min(dp[i][j + k],dp[i][j] + w);
                }
            }
        }
    }
}
//
 
void O_o(){
    cin >> x >> y;
    int ans = inf;
 
    rep(i,0,60){
        rep(j,0,60){
            if((x >> i) == (y >> j)){
                ans = min(ans,dp[i][j]);
            }
        }
    }
 
    cout << ans << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    init();
    cin >> T;
    while(T--)O_o();
    return 0;
}