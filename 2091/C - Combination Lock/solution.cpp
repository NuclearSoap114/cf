#include <bits/stdc++.h>
using namespace std;
#define int long long
#define all() a.begin(),a.end()
#define ii int i=0;i<n;i++
#define iii int i=1;i<=n;i++
 
void deal(){
    int n;cin >> n;
    if(!(n & 1)){
        cout << -1 << '
';
        return ;
    }
    vector<int> a;
 
    for(int i=1;i<=n;i+=2){
        a.emplace_back(i);
    }
 
    for(int i=2;i<=n;i+=2){
        a.emplace_back(i);
    }
 
    for(int x : a)cout << x << ' ';
    cout << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
 
    int _;cin >> _;
    while(_--)deal();
    return 0;
}