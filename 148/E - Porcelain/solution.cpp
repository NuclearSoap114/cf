#include <bits/stdc++.h>
using namespace std;
#define int long long
const int inf = 1e18,N = 105,M = 1e5 + 10;
int n,m,c[N][M],dp[M];
vector<int> s[N];
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    cin >> n >> m;
    for(int i=1;i<=n;i++){
        int num;cin >> num;
        for(int j=1;j<=num;j++){
            int x;cin >> x;
            s[i].push_back(x);
        }
    }
    // for(int i=1;i<=n;i++){
    //     for(auto x : s[i]){
    //         cout << x << ' ';
    //     }
    //     cout << '
';
    // }
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            c[i][j] = -inf;
        }
    }
    for(int i=0;i<=m;i++){
        dp[i] = -inf;
    }
    for(int i=1;i<=n;i++){
        vector<int> cur(1,0);
        for(auto x : s[i]){
            cur.push_back(x);
        }
        int nn = cur.size() - 1;
        vector<int> pre(nn + 1,0),suf(nn + 2,0);
        for(int i=1;i<=nn;i++){
            pre[i] = pre[i - 1] + cur[i];
            // cout << pre[i] << ' ';
        }
        // cout << '
';
        for(int i=nn;i>=1;i--){
            suf[i] = suf[i + 1] + cur[i];
            // cout << suf[i] << ' ';
        }
        // cout << '
';
        for(int take=0;take<=nn;take++){
            for(int l=0;l<=take;l++){
                c[i][take] = max(c[i][take],pre[l] + suf[nn - (take - l) + 1]);
            }
        }
    }
    // cout << c[2][3] << '
';
    dp[0] = 0;
    for(int i=1;i<=n;i++){// for all groups
        for(int v=m;v>=0;v--){// for all capacity
            for(int take=0;take<=s[i].size();take++){// for each group determine how many items to be taken
                if(v - take < 0)continue;
                dp[v] = max(dp[v],dp[v - take] + c[i][take]);
            }
        }
    }
    cout << dp[m] << '
';
    return 0;
}