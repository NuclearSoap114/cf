#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e5 + 10;
int n,dp[N],cnt[N],mx = -1;
 
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> n;
	for(int i=1;i<=n;i++){
		int x;cin >> x;
		cnt[x] += x;
		mx = max(mx,x);
	}
 
	dp[1] = cnt[1];
 
	for(int i=2;i<=mx;i++){
		dp[i] = max(dp[i - 1],dp[i - 2] + cnt[i]);
	}
 
	cout << dp[mx] << '
';
	return 0;
}