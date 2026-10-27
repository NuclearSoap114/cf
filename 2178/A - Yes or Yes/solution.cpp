#include <bits/stdc++.h>
using namespace std;
#define int long long
int T,cnt;
string s;
 
void O_o(){
    cin >> s;
    cnt = 0;
    for(auto &c : s){
        if(c == 'Y')cnt++;
    }
    if(cnt >=2){
        cout << "NO" << '
';
    }else{
        cout << "YES" << '
';
    }
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
 
    cin >> T;
    while(T--)O_o();
    return 0;
}