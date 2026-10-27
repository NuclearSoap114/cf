#include <bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i,l,r) for(int i=(l);i<=(r);i++)
#define rep_(i,l,r) for(int i=(r);i>=(l);i--)
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
int T,n,ans;
 
void O_o(){
    ans = 0;
    cin >> n;
    V<int> a(n + 1),b(n + 1),pa(n + 2,n + 1),pb(n + 2,n + 1),dp(n + 2,n);
    rep(i,1,n)cin >> a[i];
    rep(i,1,n)cin >> b[i];
    for(int i=n;i>=1;i--){
        pa[a[i]] = i;
        pb[b[i]] = i;
        if(a[i] == b[i]){
            int x = a[i] + 1;
            if(pa[x] == pb[x]){
                dp[i] = dp[pa[x]];
            }else{
                dp[i] = min(pa[x],pb[x]) - 1;
            }
        }
        int j;
        if(pa[1] == pb[1]){
            j = dp[pa[1]];
        }else{
            j = min(pa[1],pb[1]) - 1;
        }
        ans += max(0LL,j - i + 1);
    }
    cout << ans << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> T;
    while(T--)O_o();
    return 0;
}