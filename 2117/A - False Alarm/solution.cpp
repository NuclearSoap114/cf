#include <bits/stdc++.h>
using namespace std;
#define int long long
#define all() a.begin(),a.end()
#define iii int i=0;i<n;i++
 
void deal(){
    int n,k;cin >> n >> k;
    int l,r;
    bool f = 1;
    for(iii){
        int tmp;cin >> tmp;
        if(f && tmp == 1){
            f = 0;
            l = i;
        }
        if(tmp == 1){
            r = i;
        }
    }
    
    if(r - l + 1 > k){
        cout << "NO" << '
';
    }else{
        cout << "YES" << '
';
    }
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
 
    int _;cin >> _;
    while(_--)deal();
    return 0;
}