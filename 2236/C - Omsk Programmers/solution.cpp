#include <bits/stdc++.h>
using namespace std;
#define int long long
int T,a,b,x;
 
void O_o(){
    cin >> a >> b >> x;
    int ans = 1e18;
    int na = a;
    for(int i = 0;i <= 40;i++){
        int nb = b;
        for(int j = 0;j <= 40;j++){
            ans = min(ans,i + j + llabs(na - nb));
            if(nb == 0) break;
            nb /= x;
        }
        if(na == 0) break;
        na /= x;
    }
    cout << ans << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> T;
    while(T--) O_o();
    return 0;
}