#include <bits/stdc++.h>
using namespace std;
 
void deal(){
    vector<tuple<int,int,int>> a;
    int n,k;cin >> n >> k;
    for(int i=0;i<n;i++){
        int l,r,x;cin >> l >> r >> x;
        a.emplace_back(l,r,x);
    }
    sort(a.begin(),a.end());
 
    for(auto [l,r,x] : a){
        if(l <= k && k <= r && x>= k){
            k = x;
        }
    }
    cout << k << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
 
    int _;cin >> _;
    while(_--)deal();
    return 0;
}