#include <iostream>
//#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MAXN = 1e5 + 10;
 
int T;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
 
    cin >> T;
    while(T--){
        int n,a,b,c;cin >> n >> a >> b >> c;
        int d = a + b + c;
        int t = n / d;
        int mod = n % d;
 
        int ab = a + b,abc = a + b + c;
        if(mod == 0){
            cout << t * 3 + mod << '
';
            continue;
        }
        if(mod <= a){
            mod = 1;
        }else if(mod <= ab){
            mod = 2;
        }else{
            mod = 3;
        }
        cout << t * 3 + mod << '
';
    }
    return 0;
}