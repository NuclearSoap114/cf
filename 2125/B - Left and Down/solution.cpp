#include <bits/stdc++.h>
using namespace std;
#define int long long
#define all() a.begin(),a.end()
#define ii int i=0;i<n;i++
#define iii int i=1;i<=n;i++
 
int gcd(int a,int b){
    if(b == 0)return a;
    return gcd(b,a%b);
}
 
void deal(){
    int x,y,k;cin >> x >> y >> k;
    if(x <= k && y <= k){
        cout << 1 << '
';
        return ;
    }
    int g = gcd(x,y);
    if(g != 1 && x/g <= k && y/g <= k){
        cout << 1 << '
';
        return ;
    }
    cout << 2 << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
 
    int _;cin >> _;
    while(_--)deal();
    return 0;
}