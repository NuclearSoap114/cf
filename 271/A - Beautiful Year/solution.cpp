#include <iostream>
// #include <bits/stdc++.h>
using namespace std;
#define int long long
 
void AC(){
    int n;cin >> n;
    while(n++){
        int a = n/1000;
        int b = (n - 1000 * a) / 100;
        int c = n/10%10;
        int d = n%10;
        if(a != b && a != c && a!= d && b != c && b != d && c != d){
            cout << n << '
';
            return ;
        }
 
    }
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
 
    int T = 1;
    while(T--)AC();
    return 0;
}