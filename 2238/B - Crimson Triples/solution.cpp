#include <bits/stdc++.h>
using namespace std;
#define int long long
int T,n,ans,x;
 
void O_o(){
    ans = 0;
    cin >> n;
    for(int i=1;i<=n;i++){
        x = n / i;
        ans += x * x;
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