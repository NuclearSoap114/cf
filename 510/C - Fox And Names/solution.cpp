#include <bits/stdc++.h>
using namespace std;
#define int long long
inline void fmx(int &a,int b){ if(a<b) a=b;}
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define _rep(i,a,b) for(int i=b;i>=a;i--)
#define all() a.begin() + 1,a.begin() + n + 1
const int inf = 1e18;
int n,indeg[30];
vector<string> a;
vector<int> G[30];
 
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);cout.tie(nullptr);
	cin >> n;
	a.resize(n + 1);
	for(int i=1;i<=n;i++){
		cin >> a[i];
	}
	for(int i=1;i<n;i++){
		int j = i + 1;
		bool f = 0;
		for(int k=0;k<min(a[i].size(),a[j].size());k++){
			if(a[i][k] != a[j][k]){
				G[a[i][k] - 'a' + 1].push_back(a[j][k] - 'a' + 1);
				indeg[a[j][k] - 'a' + 1]++;
				f = 1;
				break;
			}
		}
		if(!f && a[i].size() > a[j].size()){
			cout << "Impossible" << '
';
			return 0;
		}
	}
	queue<int> q;
	for(int i=1;i<=26;i++){
		if(!indeg[i]){
			q.push(i);
		}
	}
	vector<int> ans;
	while(!q.empty()){
		int u = q.front();
		q.pop();
		ans.push_back(u);
		for(int v : G[u]){
			indeg[v]--;
			if(!indeg[v]){
				q.push(v);
			}
		}
	}
	for(int i=1;i<=26;i++){
		if(indeg[i]){
			cout << "Impossible" << '
';
			return 0;
		}
	}
	for(auto x : ans){
		cout << char(x + 'a' - 1);
	}
	cout << '
';
	return 0;
}