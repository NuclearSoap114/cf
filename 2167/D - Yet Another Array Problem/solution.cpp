#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void O_o(){
    int n;cin >> n;
    vector<ll> a(n);
    ll ans = 1e18;
    for(auto &x : a){
        cin >> x;
        for(ll j=2;j<=114;j++){
            if(__gcd(j,x) == 1){
                ans = min(ans,j);
                break;
            }
        }
    }
    cout << ans << '
';
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    int T;cin >> T;
    while(T--)O_o();
    return 0;
}