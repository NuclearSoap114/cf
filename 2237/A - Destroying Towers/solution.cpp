#include <bits/stdc++.h>
using namespace std;
#define int long long
int T,n;
 
void O_o(){
    cin >> n;
    vector<int> a(n + 1);
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    int mn = a[1];
    int ans = a[1];
    for(int i=2;i<=n;i++){
        a[i] = min(a[i],mn);
        mn = min(mn,a[i]);
        ans += a[i];
    }
    cout << ans << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> T;
    while(T--)O_o();
    return 0;
}