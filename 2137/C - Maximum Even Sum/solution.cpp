#include <bits/stdc++.h>
using namespace std;
#define int long long
 
int gcd(int a,int b){
    if(!b)return abs(a);
    return gcd(b,a%b);
}
 
void O_o(){
    int a,b;cin >> a >> b;
    int g = b / gcd(a,b);
    int ans = -1;
    if(b & 1){
        if((a + b) % 2 == 0){
            ans = a + b;
        }
        if((a * b + 1) % 2 == 0){
            ans = max(ans,a * b + 1);
        }
        if((a * g + b / g) % 2 == 0){
            ans = max(ans,a * g + b / g);
        }
    }else{
        if((a + b) % 2 == 0){
            ans = a + b;
        }
        if((a * b + 1) % 2 == 0){
            ans = max(ans,a * b + 1);
        }
        if((a * g + b / g) % 2 == 0){
            ans = max(ans,a * g + b / g);
        }
        if((a * 2 + b / 2) % 2 == 0){
            ans = max(ans,a * 2 + b / 2);
        }
        int k = b / 2;
        if((a * k + b / k) % 2 == 0){
            ans = max(ans,a * k + b / k);
        }
    }
    cout << ans << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
 
    int T;cin >> T;
    while(T--)O_o();
    return 0;
}