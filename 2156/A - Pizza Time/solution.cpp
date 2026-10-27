#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int T;
void O_o(){
    ll ans = 0;
    int n;cin >> n;
    while(n >= 3){//33 33 34 // 11 11 12 // 4 4 4  // 1 1 2
        int cur = n / 3;
        ans += cur;
        if(n % 3 == 0){
            n = cur;
        }else if(n % 3 == 1){
            n = cur + 1;
        }else{
            n = cur + 2;
        }
    }
    cout << ans << '
';
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
 
    cin >> T;
    while(T--)O_o();
    return 0;
}