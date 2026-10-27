#include <iostream>
// #include <bits/stdc++.h>
using namespace std;
#define int long long
 
void AC(){
    int cnt = 0;
    int n;cin >> n;
    string s;cin >> s;
    for(int i=1;i<n;i++){
        if(s[i] == s[i-1]){
            cnt++;
        }
    }
    cout << cnt << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
 
    int T = 1;
    while(T--)AC();
    return 0;
}