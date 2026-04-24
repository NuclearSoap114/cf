#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 3e5 + 10;
int n,m,dp[N][28],indeg[N],ans;
vector<char> c;
vector<int> G[N];
queue<int> q;
 
int f(char x){
	return x - 'a' + 1;
}
 
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);cout.tie(nullptr);
	cin >> n >> m;
	c.resize(n + 1);
	for(int i=1;i<=n;i++){
		cin >> c[i];
		dp[i][f(c[i])]++;
	}
	for(int i=1;i<=m;i++){
		int u,v;cin >> u >> v;
		G[u].push_back(v);
		indeg[v]++;
	}
	for(int i=1;i<=n;i++){
		if(!indeg[i]){
			q.push(i);
		}
	}
	while(!q.empty()){
		int u = q.front();
		q.pop();
		for(auto &v : G[u]){
			for(int i=1;i<=26;i++){
				if(i == f(c[v])){
					dp[v][i] = max(dp[v][i],dp[u][i] + 1);
				}else{
					dp[v][i] = max(dp[v][i],dp[u][i]);
				}
			}
			indeg[v]--;
			if(indeg[v] == 0){
				q.push(v);
			}
		}
	}
	for(int i=1;i<=n;i++){
		if(indeg[i]){
			cout << -1 << '
';
			return 0;
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=26;j++){
			ans = max(dp[i][j],ans);
		}
	}
	cout << ans << '
';
	return 0;
}