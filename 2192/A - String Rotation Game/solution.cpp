#include <bits/stdc++.h>
using namespace std;
#define int long long
int n,ans;
string s;
 
void O_o(){
    cin >> n >> s;
    ans = 1;
    bool f = 0;
    for(int i=0;i<n - 1;i++){
        if(s[i] != s[i + 1])ans++;
        else f = 1;
    }
    if(s[0] == s[n - 1]){
        cout << ans << '
';
    }else{
        if(f)ans++;
        cout << ans << '
';
    }
 
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    int T;cin >> T;
    while(T--)O_o();
    return 0;
}