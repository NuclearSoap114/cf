#include <bits/stdc++.h>
using namespace std;
#define int long long
#define go(i,a,b) for(int i=a;i<=b;i++)
#define og(i,a,b) for(int i=b;i>=a;i--)
int T,n;
const int N = 3e5 + 10,inf = 0x3f3f3f3f3f3f;
vector<vector<int>> fac(N);
 
void O_o(){
    cin >> n;
    vector<int> a(n + 1),b(n + 1);
    vector<int> dp(n + 1,inf);
    for(int i=1;i<=n;i++){
        cin >> a[i];
        dp[a[i]] = 1;
    }
    for(int i=1;i<=n;i++){
        for(auto &x : fac[i]){
            dp[i] = min(dp[i],dp[x] + dp[i / x]);
        }
    }
    for(int i=1;i<=n;i++){
        if(dp[i] == inf){
            cout << -1 << ' ';
        }else{
            cout << dp[i] << ' ';
        }
    }
    cout << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    for(int i=1;i<=N;i++){
        for(int j=i;j<=N;j+=i){
            fac[j].emplace_back(i);
        }
    }
    cin >> T;
    while(T--)O_o();
}