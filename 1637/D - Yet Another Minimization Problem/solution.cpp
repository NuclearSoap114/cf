#include <bits/stdc++.h>
using namespace std;
#define int long long
const int inf = 1e18,N = 105;
int n,T,base,suma,sumb,cur,ans;
bool dp[N][100 * 105];
 
void O_o(){
	cin >> n;
	for(int i=0;i<=n;i++){
		for(int j=0;j<=100 * 101;j++){
			dp[i][j] = 0;
		}
	}
	ans = inf;
	base = suma = sumb = 0;
	cur = inf;
	vector<int> a(n + 1),b(n + 1);
	for(int i=1;i<=n;i++){
		cin >> a[i];
		base += a[i] * a[i] * (n - 2);
		suma += a[i];
	}
	for(int i=1;i<=n;i++){
		cin >> b[i];
		base += b[i] * b[i] * (n - 2);
		sumb += b[i];
	}
	dp[0][0] = 1;
	dp[1][a[1]] = 1;
	dp[1][b[1]] = 1;
	for(int i=2;i<=n;i++){
		for(int j=1;j<=100 * 100;j++){
			dp[i][j] = dp[i - 1][j - a[i]] | dp[i - 1][j - b[i]];
		}
	}
	int aver = suma + sumb >> 1;
	for(int i=0;i<=100 * 100;i++){
		if(dp[n][i]){
			int bb = suma + sumb - i;
			ans = min(ans,base + i * i + bb * bb);
		}
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