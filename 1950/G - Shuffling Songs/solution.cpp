#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 20;
int T,n,dp[1 << 17][17];
vector<int> G[N];
 
struct node{
    string x,y;
    int id;
};
 
void O_o(){
    cin >> n;
    for(int i = 0;i < n;i++){
        G[i].clear();
    }
    memset(dp,0,sizeof(dp));
    vector<node> a(n + 1);
    for(int i = 0;i < n;i++){
        cin >> a[i].x >> a[i].y;
        a[i].id = i;
    }
    for(int i = 0;i < n;i++){
        for(int j = i;j < n;j++){
            if(i == j)continue;
            if(a[i].x == a[j].x || a[i].y == a[j].y){
                G[a[i].id].push_back(a[j].id);
                G[a[j].id].push_back(a[i].id);
            }
        }
    }
    for(int i = 0;i < n;i++){
        dp[1 << i][i] = 1;
    }
    int ans = 1;
    for(int mask = 1;mask < (1 << n);mask++){
        for(int u = 0;u < n;u++){
            if(!dp[mask][u])continue;
            ans = max(ans,(int)__builtin_popcountll(mask));
            for(int v : G[u]){
                if((mask >> v) & 1)continue;
                dp[mask | (1 << v)][v] = 1;
            }
        }
    }
    cout << n - ans << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> T;
    while(T--)O_o();
    return 0;
}