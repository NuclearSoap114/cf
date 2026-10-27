#include <bits/stdc++.h>
using namespace std;
 
void O_o(){
    int n;cin >> n;
    string s;cin >> s;
    int cnt = 0;
    int ans = 0;
    for(auto &c : s){
        if(c == '0')cnt++;
    }
    for(int i=0;i<n;i++){
        if(s[i] == '0' && i >= cnt)ans++;
        if(s[i] == '1' && i < cnt)ans++;
    }
    cout << ans / 2 << '
';
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
 
    int T;cin >> T;
    while(T--)O_o();
    return 0;
}