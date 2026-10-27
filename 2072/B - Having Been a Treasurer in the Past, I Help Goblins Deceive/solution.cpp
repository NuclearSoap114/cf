#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void O_o(){
    int n;cin >> n;
    string s;cin >> s;
 
    int cnt1 = 0;
    int cnt2 = 0;
 
    for(char c : s){
        if(c == '-'){
            cnt1++;
        }else{
            cnt2++;
        }   
    }
 
    int l,r,m;
    if(cnt1 & 1){
        l = cnt1 / 2;
        r = cnt1 / 2 + 1;
    }else{
        if(cnt1 == 0){
            cout << 0 << '
';
            return ;
        }
        l = cnt1 / 2;
        r = cnt1 / 2;
    }
    m = cnt2;
    cout << l * m * r << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
 
    int T;cin >> T;
    while(T--)O_o();
    return 0;
}