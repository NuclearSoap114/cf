#include <bits/stdc++.h>
using namespace std;
#define int long long
string s = "hello";
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
 
    string n;cin >> n;
    int cnt = 0;
    for(char &c : n){
        if(s[cnt] == c){
            cnt++;
            // cout << c << ' ' << cnt << '
';
            if(cnt == 5){
                cout << "YES" << '
';
                return 0;
            }
        }
    }
    cout << "NO" << '
';
    return 0;
}