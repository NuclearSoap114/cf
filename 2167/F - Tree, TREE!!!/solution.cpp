#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MAXN = 2e5 + 10;
int T,n,k,sz[MAXN],sum,ans;
vector<int> G[MAXN];
void dfs(int fa,int x){
    sz[x] = 1;
    for(auto &it : G[x]){
        if(it == fa) continue;
        dfs(x,it);
        sz[x] += sz[it];
    }
    if(sz[x] >= k) sum++;
}
void dfs2(int fa,int x){
    for(auto &it : G[x]){
        if(it == fa) continue;
        int tmp1 = sz[x];
        int tmp2 = sz[it];
        sz[x] -= sz[it];
        sz[it] += sz[x];
        if(tmp1 >= k && sz[x] < k) sum--;
        if(tmp2 < k && sz[it] >= k) sum++;
        ans += sum;
        dfs2(x,it);
        //backtracking
        if(tmp1 >= k && sz[x] < k) sum++;
        if(tmp2 < k && sz[it] >= k) sum--;
        sz[x] = tmp1;
        sz[it] = tmp2;
    }
}
void O_o(){
    cin >> n >> k;
    //initialization
    ans = 0,sum = 0;
    for(int i=1;i<=n;i++){
        G[i].clear();
        sz[i] = 0;
    }
    for(int i=0;i<n-1;i++){
        int from,to;cin >> from >> to;
        G[from].emplace_back(to);
        G[to].emplace_back(from);
    }
    dfs(0,1);
    ans = sum;
    dfs2(0,1);
    cout << ans << '
';
}
signed main(){
    cin >> T;
    while(T--)O_o();
    return 0;
}