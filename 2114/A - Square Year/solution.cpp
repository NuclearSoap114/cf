#include <bits/stdc++.h>
using namespace std;
#define int long long 
 
bool v(int n){
    if(sqrt(n) - (int)sqrt(n) < 0.0000001)return true;
    return false;
}
 
void deal(){
    string s;cin >> s;
    if(s == "0000"){
        cout << 0 << ' ' << 0 << '
';
        return ;
    }
    int num = 0;
    for(int i = 0;i<s.length();i++){
        num += (s[i] - '0');
        num *= 10;
    }
    num /= 10;
 
    if(v(num)){
        cout << sqrt(num) - 1 << ' ' << 1 << '
';
    }else{
        cout << -1 << '
';
    }
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
 
    int T;cin >> T;
    while(T--)deal();
    return 0;
}