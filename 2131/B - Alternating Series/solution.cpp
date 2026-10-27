#include <iostream>
// #include <bits/stdc++.h>
using namespace std;
#define int long long 
 
void deal(){
    int n;cin >> n;
    if(n & 1){
        for(int i=1;i<=n;i++){
            if(i & 1){
                cout << -1 << ' ';
            }else{
                cout << 3 << ' ';
            }
        }
    }else{
        for(int i=1;i<=n;i++){
            if(i & 1){
                cout << -1 << ' ';
            }else{
                if(i != n) cout << 3 << ' ';
                else cout << 2 << ' ';
            }
        }
    }
    cout << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
 
    int T;cin >> T;
    while(T--)deal();
    return 0;
}