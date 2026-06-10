#include <bits/stdc++.h>
using namespace std;
#define int long long
int T;
int n,x,y,z;
 
void O_o(){
    cin >> n >> x >> y >> z;
    int k = x + y;
    int ans1 = (n + k - 1) / k;
    int need = n - x * z;
    if(need <= 0){
        cout << ans1 << '
';
        return ;
    }
    k = x + 10 * y;
    int ans2 = (need + k - 1) / k;
    cout << min(ans1,ans2 + z) << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> T;
    while(T--)O_o();
    return 0;
}