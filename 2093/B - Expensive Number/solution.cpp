#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void O_o(){
    string s;cin >> s;
    int pos = 0;
    for(int i=s.length()-1;i>=0;i--){
        if(s[i] != '0'){
            pos = i;
            break;
        }
    }
    int cnt = 0;
    for(int i=0;i<pos;i++){
        if(s[i] == '0'){
            cnt++;
        }
    }
    int len = s.length();
    cout << len - cnt - 1 << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
 
    int T;cin >> T;
    while(T--)O_o();
    return 0;
}