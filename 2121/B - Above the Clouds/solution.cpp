#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void deal(){
    int n;cin >> n;
    string s;cin >> s;
    int h[26] = {0};
    for(char c : s){
        h[c - 'a']++;
    }
 
    for(int i=0;i<26;i++){
        if(h[i] >= 3){
            cout << "YES" << '
';
            return ;
        }else if(h[i] == 2){
            char x = char(i + 'a');
            if(!(s[0] == x && s[s.length() - 1] == x)){
                cout << "YES" << '
';
                return ;
            }
        }
    }
    cout << "NO" << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
 
    int _;cin >> _;
    while(_--)deal();
    return 0;
}