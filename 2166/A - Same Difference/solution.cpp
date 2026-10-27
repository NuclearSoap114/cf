#include <bits/stdc++.h>
using namespace std;
#define int long long
int T,n,ans;
string s;
void O_o(){
    cin >> n;
    cin >> s;
    ans = 0;
    for(int i=0;i<s.size()-1;i++){
        if(s[i] != s[s.size()-1]) ans++;
    }
    cout << ans << '
';
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    cin >> T;
    while(T--)O_o();
    return 0;
}