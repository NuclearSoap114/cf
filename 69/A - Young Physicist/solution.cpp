#include <iostream>
// #include <bits/stdc++.h>
using namespace std;
#define int long long
 
void AC(){
    int n;cin >> n;
    int aa = 0;
    int bb = 0;
    int cc = 0;
    for(int i=0;i<n;i++){
        int a,b,c;cin >> a >> b >> c;
        aa += a;
        bb += b;
        cc += c;
    }
    if(aa == 0 && bb == 0 && cc == 0){
        cout << "YES" << '
';
    }else{
        cout << "NO" << '
';   
    }
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
 
    int T = 1;
    while(T--)AC();
    return 0;
}