#include <bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i,l,r) for(int i=(l);i<=(r);i++)
const int inf = 1e18,N = 2e5 + 10,mod = 998244353;
int n,tot,ans,sum;
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    vector<int> a(n + 1);
    rep(i,1,n)cin >> a[i],tot += a[i];
    sort(a.begin() + 1,a.begin() + n + 1);
    vector<int> f(tot + 1,0);
    f[0] = 1;
    auto nf = f;
    rep(i,1,n){
        for(int j=0;j<=sum;j++){
            int v = max(a[i],(a[i] + j + 1) / 2);
            ans = (ans + nf[j] * v % mod) % mod;
        }
        for(int j=tot;j>=0;j--){
            nf[j] = f[j];
            if(j - a[i] < 0)continue;
            nf[j] = (nf[j] + f[j - a[i]]) % mod;
        }
        f = nf;
        sum += a[i];
    }
    cout << ans << '
';
    return 0;
}