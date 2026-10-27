#include <bits/stdc++.h>
using namespace std;
#define int long long
int T,n,ans;
 
bool check(int x){
    if(x % 2 == 0 || x % 3 == 0)return 1;
    else if(x > 2) return 1;
}
 
void O_o(){
    cin >> n;
    if(n == 3){
        cout << 3 << '
';
        return ;
    }else if(n == 2){
        cout << 2 << '
';
        return ;
    }else{
        cout << n % 2 << '
';
        return ;
    }
    if(n & 1){
        if(check(n / 2) && check(n / 2 + 1))ans = 1;
        else ans = 2;
    }else{
        if(check(n / 2))ans = 0;
        else if(check(n / 2 - 1) && check(n / 2 + 1) && (n / 2 - 1) != 0)ans = 1;
        else ans = 2;
    }
    cout << ans << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);;
 
    cin >> T;
    while(T--)O_o();
    return 0;
}