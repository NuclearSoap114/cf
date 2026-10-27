#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void O_o(){
    string ss = "codeforces";
    string s;cin >> s;
    int ans = 0;
    for(int i=0;i<ss.length();i++){
        if(s[i] != ss[i])ans++;
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