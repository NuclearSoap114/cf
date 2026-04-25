#include <bits/stdc++.h>
using namespace std;
#define int long long
const int inf = 1e18;
int n,m,tar,dp[105][105][105],ans = inf;
 
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> n >> m >> tar;
	vector<int> c(n + 1);
	for(int i=1;i<=n;i++){
		cin >> c[i];
	}
	vector<vector<int>> p(n + 1,vector<int>(m + 1));
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin >> p[i][j];
		}
	}
	for(int i=0;i<=101;i++){
		for(int j=0;j<=101;j++){
			for(int k=0;k<=101;k++){
				dp[i][j][k] = inf;
			}
		}
	}
	if(c[1] == 0){
		for(int i=1;i<=m;i++){
			dp[1][1][i] = p[1][i];
		}
	}else{
		dp[1][1][c[1]] = 0;
	}
	for(int i=2;i<=n;i++){
		for(int beauty=1;beauty<=tar;beauty++){
			for(int color=1;color<=m;color++){
				if(c[i] != 0 && color != c[i])continue; // invalid status
				int cost = 0;
				if(c[i] == 0){
					cost = p[i][color];
				}
				for(int last=1;last<=m;last++){
					if(last == color){
						if(c[i] == 0){
							dp[i][beauty][color] = min(dp[i][beauty][color],dp[i - 1][beauty][last] + cost);
						}else{
							dp[i][beauty][color] = min(dp[i][beauty][color],dp[i - 1][beauty][last]);
						}
					}else{
						if(c[i] == 0){
							dp[i][beauty][color] = min(dp[i][beauty][color],dp[i - 1][beauty - 1][last] + cost);
						}else{
							dp[i][beauty][color] = min(dp[i][beauty][color],dp[i - 1][beauty - 1][last]);
						}
					}
				}
			}
		}
	}
	for(int i=1;i<=m;i++){
		ans = min(ans,dp[n][tar][i]);
	}
	if(ans == inf){
		cout << -1 << '
';
	}else{
		cout << ans << '
';
	}
	return 0;
}