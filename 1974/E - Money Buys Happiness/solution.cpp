#include <bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i,l,r) for(int i=(l);i<=(r);i++)
#define rep_(i,l,r) for(int i=(l);i>=(r);i--)
#define all(i) i.begin() + 1,i.begin() + n + 1
#define pii pair<int,int>
#define V vector
#define F first
#define S second
#define pb push_back
#define is insert
const int inf = 1LL << 62,H = 1e5 + 10,N = 55;
const double pi = acos(-1);
// --------------- AC ---------------
int T,n,m,x,dp[H],h[N],c[N];
// 幸福值为 j 的最小开销
 
void O_o(){
    cin >> m >> x;
    rep(i,1,m){
        cin >> c[i] >> h[i];
    }
    int mxh = accumulate(h + 1,h + m + 1,0LL);
    rep(j,0,mxh){
        dp[j] = inf;
    }
    dp[0] = 0;
    rep(i,1,m){
        int have = (i - 1) * x;
        rep_(j,mxh,h[i]){
            if(dp[j - h[i]] == inf)continue;
            if(have - dp[j - h[i]] >= c[i]){
                dp[j] = min(dp[j],dp[j - h[i]] + c[i]);
            }
        }
    }
    rep_(i,mxh,0){
        if(dp[i] != inf){
            cout << i << '
';
            return ;
        }
    }
    cout << 0 << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> T;
    while(T--)O_o();
    return 0;
}