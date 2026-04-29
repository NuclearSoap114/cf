#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 1e9 + 7;
int T,a,b,k,n,m,inv[100005];
 
void yz(){
    cin >> a >> b >> k;
    int nn = a * k - k + 1;
    n = ((a - 1) % mod * k % mod + 1) % mod;
    m = ((k % mod) * (b - 1) % mod) % mod;
    for(int i=1;i<=a;i++){
        m = ((m % mod) * ((nn - i + 1) % mod)) % mod;
        m = ((m % mod) * (inv[i] % mod)) % mod;
    }
    cout << n << ' ' << (m + 1) % mod << '
';
}
 
signed main(){
    inv[1] = 1;
    for(int i=2;i<=100004;i++){
        inv[i] = (mod - mod / i) * inv[mod % i] % mod;
    }
    cin >> T;
    while(T--)yz();
    return 0;
}