#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MAXN = 1e5 + 10;
 
int gcd(int a,int b){
    while (b) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}
 
int lcm(int a,int b){
    return a / gcd(a, b) * b;
}
 
void deal(){
    int n;cin >> n;
    int a[MAXN],b[MAXN],ans[MAXN];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        cin >> b[i];
    }
    for(int i=0;i<n;i++){
        ans[i] = lcm(a[i],b[i]);
    }
    int x = 0;
    for(int i=0;i<n;i++){
        x = gcd(x,ans[i]);
        if(x != a[i]){
            cout << "NO" << '
';
            return ;
        }
    }
    x = 0;
    for(int i=n-1;i>=0;i--){
        x = gcd(x,ans[i]);
        if(x != b[i]){
            cout << "NO" << '
';
            return ;
        }
    }
    cout << "YES" << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
 
    int _;cin >> _;
    while(_--)deal();
    return 0;
}