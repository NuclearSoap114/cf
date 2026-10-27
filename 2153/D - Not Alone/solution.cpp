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
const int inf = 1LL << 62,N = 2e5 + 10;
const double pi = acos(-1);
// --------------- AC ---------------
int T,n;
 
void O_o(){
    cin >> n;
    V<int> a(n * 2 + 1);
    rep(i,1,n){cin >> a[i];a[i + n] = a[i];}
    auto calc = [&](int bg) -> int {
        V<int> dp(n * 2 + 1,inf);
        dp[bg - 1] = 0;
        dp[bg] = inf;
        dp[bg + 1] = abs(a[bg] - a[bg + 1]);
        rep(i,bg + 2,bg + n - 1){
            int mx = max({a[i - 2],a[i - 1],a[i]});
            int mn = min({a[i - 2],a[i - 1],a[i]});
            dp[i] = min(dp[i - 2] + abs(a[i] - a[i - 1]),dp[i - 3] + mx - mn);
        }
        return dp[bg + n - 1];
    };
    cout << min({calc(1),calc(2),calc(3)}) << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> T;
    while(T--)O_o();
    return 0;
}