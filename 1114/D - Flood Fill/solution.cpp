#include <bits/stdc++.h>
using namespace std;
#define int long long
inline void fmx(int &a,int b){ if(a<b) a=b;}
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define _rep(i,a,b) for(int i=b;i>=a;i--)
#define all() a.begin() + 1,a.begin() + n + 1
const int inf = 1e18,N = 5005;
int n,dp[N][N];
vector<int> a(1,0);
 
int dfs(int l,int r){
    if(l >= r)return dp[l][r] = 0;
    if(dp[l][r] != inf)return dp[l][r];
    if(a[l] == a[r])return dp[l][r] = dfs(l + 1,r - 1) + 1;
    return dp[l][r] = min(dfs(l + 1,r),dfs(l,r - 1)) + 1;
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    cin >> n;
    for(int i=0;i<=5003;i++){
        for(int j=0;j<=5003;j++){
            dp[i][j] = inf;
        }    
    }
    for(int i=1;i<=n;i++){
        dp[i][i] = 0;
        int x;cin >> x;
        if(a.back() != x){
            a.push_back(x);
        }
    }
    n = a.size() - 1;
    cout << dfs(1,n) << '
';
    return 0;
}