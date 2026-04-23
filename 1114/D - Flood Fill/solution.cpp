#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 5005;
int n,dp[N][N];
 
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);cout.tie(nullptr);
	cin >> n;
	vector<int> a(1,0);
	for(int i=1;i<=n;i++){
		int x;cin >> x;
		if(a.back() != x)a.push_back(x);
	}
	auto b = a;
	int m = a.size() - 1;
	reverse(b.begin() + 1,b.end());
	for(int i=1;i<=m;i++){
		for(int j=1;j<=m;j++){
			if(a[i] == b[j])dp[i][j] = dp[i - 1][j - 1] + 1;
			else dp[i][j] = max(dp[i - 1][j],dp[i][j - 1]);
		}
	}
	cout << m - ((dp[m][m] + 1) >> 1) << '
';
	return 0;
}