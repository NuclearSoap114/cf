#include <bits/stdc++.h>
using namespace std;
#define int long long 
 
void O_o(){
    int n,rk,ck,rd,cd;cin >> n >> rk >> ck >> rd >> cd;
    int ans = 0;
    if(rk > rd)ans = max(ans,(rk - rd) + (n - rk));
    if(rk < rd)ans = max(ans,(rd - rk) + rk);
    if(ck > cd)ans = max(ans,(ck - cd) + (n - ck));
    if(ck < cd)ans = max(ans,(cd - ck) + ck);
    cout << ans << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
 
    int T;cin >> T;
    while(T--)O_o();
    return 0;
}