#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void O_o(){
    int n;cin >> n;
    vector<int> a(n + 1);
    int mn = 0x3f3f3f3f,mx = -1;
    for(int i=1;i<=n;i++){
        cin >> a[i];
        mn = min(mn,a[i]);
        mx = max(mx,a[i]);
    }
    cout << mx - mn << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    int T;cin >> T;
    while(T--)O_o();
    return 0;
}