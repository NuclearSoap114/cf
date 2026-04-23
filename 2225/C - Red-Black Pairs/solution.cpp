#include <bits/stdc++.h>
using namespace std;
#define int long long
inline void fmx(int &a,int b){ if(a<b) a=b;}
#define go(i,a,b) for(int i=a;i<=b;i++)
#define og(i,a,b) for(int i=b;i>=a;i--)
#define all() a.begin() + 1,a.begin() + n + 1
const int N = 2e5 + 10,inf = 1e18;
int T,n,dp[N];
char a[N],b[N];
 
void O_o(){
	cin >> n;
	for(int i=0;i<=n;i++){
		dp[i] = inf;
	}
	dp[0] = 0;
	for(int i=1;i<=n;i++){
		cin >> a[i];
	}
	for(int i=1;i<=n;i++){
		cin >> b[i];
	}
	for(int i=1;i<=n;i++){
		dp[i] = min(dp[i],dp[i - 1] + (a[i] != b[i]));
		if(i + 1 <= n){
			// dp[i] = min(dp[i],dp[i - 1] + (a[i] != a[i + 1]) + (b[i] != b[i + 1]));
			dp[i + 1] = min(dp[i + 1],dp[i - 1] + (a[i] != a[i + 1]) + (b[i] != b[i + 1]));
		}
	}
	cout << dp[n] << '
';
}
 
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);cout.tie(nullptr);
	cin >> T;
	while(T--)O_o();
}