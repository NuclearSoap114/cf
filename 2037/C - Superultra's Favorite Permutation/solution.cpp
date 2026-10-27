#include <bits/stdc++.h>
using namespace std;
#define int long long 
 
void O_o(){
    int n;cin >> n;
    if(n < 5){
        cout << -1 << '
';
        return ;
    }
    vector<int> ans;
    for(int i=1;i<=n;i++){
        if(i & 1 && i != 5) ans.emplace_back(i);
    }
    ans.emplace_back(5);
    ans.emplace_back(4);
    for(int i=1;i<=n;i++){
        if(!(i & 1) && i != 4) ans.emplace_back(i);
    }
    for(auto x : ans){
        cout << x << ' ';
    }
    cout << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
 
    int T;cin >> T;
    while(T--)O_o();
    return 0;
}