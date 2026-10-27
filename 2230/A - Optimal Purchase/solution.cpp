#include <bits/stdc++.h>
using namespace std;
#define int long long
int T,n,a,b;
 
void O_o(){
    cin >> n >> a >> b;
    if(a * 3 <= b){
        cout << a * n << '
';
        return ;
    }
    if(n <= 3){
        for(int i=1;i<=3;i++){
            if(i == n){
                cout << (a * n < b ? a * n : b) << '
';
                return ;
            }
        }
    }
    int aa = n % 3,bb = n / 3;
    int ans = bb * b;
    for(int i=1;i<=3;i++){
        if(i == aa){
             ans += (a * aa < b ? a * aa : b);
            break;
        }
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