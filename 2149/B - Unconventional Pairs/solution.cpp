#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void O_o(){
    int n;cin >> n;
    vector<int> a(n);
    for(auto &x : a){
        cin >> x;
    }
    sort(a.begin(),a.end());
    int ans = -1;
    for(int i=0;i<n;i+=2){
        ans = max(abs(a[i] - a[i+1]),ans);
    }
    cout << ans << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
 
    int T;cin >> T;
    while(T--)O_o();
    return 0;
}