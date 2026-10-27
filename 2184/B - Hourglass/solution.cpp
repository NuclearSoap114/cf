#include <bits/stdc++.h>
using namespace std;
#define int long long
 
int T,s,k,m;
 
void solve(){
    cin >> s >> k >> m;
    int ans = 0;
 
    if (k >= s){
        int rem = m % k;
        if (rem >= s) ans = 0;
        else ans = s - rem;
    }else{
        int q = m / k;
        int rem = m % k;
        int base = (q % 2 == 0 ? s : k);
        ans = base - rem;
    }
 
    cout << ans << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    cin >> T;
    while (T--) solve();
    return 0;
}