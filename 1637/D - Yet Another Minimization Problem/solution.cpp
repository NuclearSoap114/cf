#include <bits/stdc++.h>
using namespace std;
#define int long long
const int inf = 1e18,N = 105;
int n,T,base,suma,sumb,cur,ans;
bool dp[100 * 105];
 
void O_o(){
	cin >> n;
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
	memset(dp, 0, sizeof dp);
	dp[0] = 1;
	for(int i=1;i<=n;i++){
		vector<bool> ndp(100 * 102);
		for(int j=0;j<=100 * 100;j++){
			if(dp[j]){
				ndp[j + a[i]] = ndp[j + b[i]] = 1;
			}
		}
		for(int k=0;k<=100 * 100;k++){
			dp[k] = ndp[k];
		}
	}
	for(int i=0;i<=100*100;i++){
		if(dp[i]){
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