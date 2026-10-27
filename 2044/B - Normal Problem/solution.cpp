#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void O_o(){
    string s;cin >> s;
    for(int i=0;i<s.size();i++){
        if(s[i] == 'q'){
            s[i] = 'p';
        }else if(s[i] == 'p'){
            s[i] = 'q';
        }
    }
    reverse(s.begin(),s.end());
    cout << s << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
 
    int T;cin >> T;
    while(T--)O_o();
    return 0;
}