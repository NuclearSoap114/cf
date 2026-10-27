#include <bits/stdc++.h>
using namespace std;
#define int long long
 
int cal(int n){
    int a1 = n / 2 + n / 3 + n / 5 + n / 7;
    int a2 = n / 6 + n / 10 + n / 14 + n / 15 + n / 21 + n / 35;
    int a3 = n / 105 + n / 70 + n / 42 + n / 30;
    int a4 = n / 210;
    return a1 - a2 + a3 - a4;
}
 
void O_o(){
    int l,r;cin >> l >> r;
    int tot = r - l + 1;
    cout << tot - (cal(r) - cal(l - 1)) << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
 
    int T;cin >> T;
    while(T--)O_o();
    return 0;
}