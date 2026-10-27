#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MAXN = 8e3 + 10;
int n,T,a[MAXN],c[MAXN],dp[MAXN];
void O_o(){
    int sum = 0,tot = 0;
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    for(int i=1;i<=n;i++){
        cin >> c[i];
        tot += c[i];
        dp[i] = c[i];
    }
    if(n == 1){
        cout << 0 << '
';
        return ;
    }
    for(int i=2;i<=n;i++){
        for(int j=1;j<i;j++){
            if(a[j] <= a[i]){
                dp[i] = max(dp[i],dp[j] + c[i]);
                // sum = max(sum,dp[i]);
            }
        }
    }
    for(int i=1;i<=n;i++)sum = max(sum,dp[i]);
    // cout << '
';
    // // cout << sum << '
';
    cout << tot - sum << '
';
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    cin >> T;
    while(T--)O_o();
    return 0;
}