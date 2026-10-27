#include <iostream>
// #include <bits/stdc++.h>
using namespace std;
#define int long long
 
void AC(){
    string s;cin >> s;
    string ans = "";
    for(int i=0;i<s.length();i++){
        if(s[i] == '.'){
            ans += '0';
        }else if(s[i] == '-'){
            i++;
            if(s[i] == '-'){
                ans += '2';
            }else if(s[i] == '.'){
                ans += '1';
            }
        }
    }
    cout << ans << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
 
    int T = 1;;
    while(T--)AC();
    return 0;
}