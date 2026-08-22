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
const int inf = 1LL << 62,N = 2e5 + 10,mod = 1e9 + 7;
const double pi = acos(-1);
// --------------- AC ---------------
int T,n,x,y,dp[N] = {1},h = 1,r = N,ans;
 
void O_o(){
    cin >> x >> y;
    while(h + 1 != r){
        int mid = h + r >> 1;
        if(((1 + mid) * mid >> 1) <= x + y)h = mid;
        else r = mid;
    }
    rep(i,1,h) rep_(j,y,i) dp[j] = (dp[j - i] + dp[j]) % mod;
    rep(i,0,y) if(i + x >= (1 + h) * h >> 1) ans = (ans + dp[i]) % mod;
    cout << ans << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    T = 1;
    while(T--)O_o();
    return 0;
}