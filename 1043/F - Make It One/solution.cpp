#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 3e5 + 10,MOD = 998244353;
int cnt[N],n,a[N],mx = -1,dp[10][N],ans = -1,inv[N];
 
int c(int b,int s){
    if(b < s)return 0;
    int res = 1;
    for(int i=b;i>=b - s + 1;i--){
        res = res * i % MOD;
    }
    auto f = [&](int x) -> int {
        int k = 1;
        for(int i=2;i<=x;i++)k *= i;
        return k;
    };
    res = ((res % MOD) * (inv[f(s)] % MOD)) % MOD;
    return res;
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    inv[1] = 1;
    for(int i=2;i<=7*6*5*4*3*2;i++){
        inv[i] = (MOD - MOD / i) * inv[MOD % i] % MOD;
    }
    cin >> n;
    for(int i=1;i<=n;i++){
        int x;cin >> x;
        a[x]++;
        mx = max(mx,x);
    }
    for(int i=1;i<=mx;i++){
        for(int j=i;j<=mx;j+=i){
            cnt[i] += a[j];
        }
    }
    for(int i=1;i<=7;i++){
        for(int j=mx;j>=1;j--){
            dp[i][j] = c(cnt[j],i);
            for(int k=2;k * j <= mx;k++){
                dp[i][j] = (dp[i][j] - dp[i][k * j] % MOD + MOD) % MOD;
            }
            if(j == 1 && dp[i][j] > 0){
                cout << i << '
';
                return 0;
            }
        }
    }
    cout << -1 << '
';
    return 0;
}