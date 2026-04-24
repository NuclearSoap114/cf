#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e5 + 10;
int n,dp[N][2],cnt[N],mx = -1;
 
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> n;
	for(int i=1;i<=n;i++){
		int x;cin >> x;
		cnt[x] += x;
		mx = max(mx,x);
	}
 
	dp[0][0] = 0;
	dp[0][1] = 0;
	dp[1][0] = 0;
	dp[1][1] = cnt[1];
 
	for(int i=2;i<=mx;i++){
		dp[i][0] = max(dp[i - 1][0],dp[i - 1][1]);
		dp[i][1] = dp[i - 1][0] + cnt[i];
	}
 
	cout << max(dp[mx][1],dp[mx][0]) << '
';
	return 0;
}