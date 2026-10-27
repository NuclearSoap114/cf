#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MAXN = 2e5 + 5;
int T,n,a[MAXN],ans,mx;
void O_o(){
    ans = 0;
    mx = -1;
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> a[i];
        mx = max(mx,a[i]);
    }
    a[n + 1] = a[1];
    for(int i=1;i<=n;i++){
        ans += max(a[i],a[i+1]);
        // cout << ans << '
';
    }
    // cout << mx << '
';
    cout << ans - mx << '
';
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    cin >> T;
    while(T--)O_o();
    return 0;
}