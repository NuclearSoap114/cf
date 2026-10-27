#include <iostream>
// #include <bits/stdc++.h>
using namespace std;
#define int long long
 
void AC(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            int t;cin >> t;
            if(t){
                cout << abs(i-3) + abs(j-3) << '
';
                return ;
            }
        }
    }    
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    AC();
    return 0;
}