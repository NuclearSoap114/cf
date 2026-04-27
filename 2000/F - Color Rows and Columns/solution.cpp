#include <bits/stdc++.h>
using namespace std;
#define int long long
inline void fmx(int &a,int b){ if(a<b) a=b;}
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define _rep(i,a,b) for(int i=b;i>=a;i--)
#define all() a.begin() + 1,a.begin() + n + 1
const int inf = 1e18,N = 1005,K = 105;
int T,n,k,c[N][K],dp[N][K];
 
struct rec{
    int width,height;
};
 
// dp[i][j][0/1] :  前 i 个 rectangles 构成 j 分的最小 cost 0/1 : pick or not
// c[i][j] : 第 i 个 rectangle 构成 j 分的最小 cost
// dp[i][j][0] = min(dp[i][j][0],dp[i - 1][j][1],dp[i - 1][j][0])
// dp[i][j][1] = min(dp[i][j][1],dp[i - 1][j - alter][1] + c[i][alter],dp[i - 1][j - alter][0] + c[i][alter])
 
void O_o(){
    cin >> n >> k;
    vector<rec> a(n + 1);
    for(int i=1;i<=n;i++){
        cin >> a[i].width >> a[i].height;
    }
    // 预处理 c[i][j]
    // auto ck = [&](int pos,int tar,int have) -> bool {
    //     int mx = max(a[pos].height,a[pos].width),mn = min(a[pos].height,a[pos].width);
 
    // };
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=k;j++){
    //         int l = 1,r = 100 * 100 + 1;
    //         while(l + 1 != r){
    //             int mid = l + r >> 1;
    //             if(!ck(i,j,mid)){
    //                 l = mid;
    //             }else{
    //                 r = mid;
    //             }
    //         }
    //         c[i][j] = r;
    //     }
    // }
    for(int i = 1;i <= n;i++){
        for(int j = 0;j <= k;j++){
            c[i][j] = inf;
        }
        c[i][0] = 0;
        int w = a[i].width;
        int h = a[i].height;
        for(int x=0;x<=w;x++){
            for(int y=0;y<=h;y++){
                int score = x + y;
                int cost = x * h + y * w - x * y;
 
                score = min(score,k);
                c[i][score] = min(c[i][score],cost);
            }
        }
    }
    // dp
    for(int i=0;i<=1003;i++){
        for(int j=0;j<=102;j++){
            dp[i][j] = inf;
        }
    }
    for(int i=0;i<=n;i++){
        dp[i][0] = 0;
    }
    for(int i=0;i<=k;i++){
        dp[1][i] = c[1][i];
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=k;j++){
            for(int alter=0;j - alter >= 0;alter++){
                dp[i][j] = min(dp[i][j],dp[i - 1][j - alter] + c[i][alter]);
            }
        }
    }
    if(dp[n][k] >= inf){
        cout << -1 << '
';
        return ;
    }
    cout << dp[n][k] << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    cin >> T;
    while(T--)O_o();
}