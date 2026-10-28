#include <bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i,l,r) for(int i=(l);i<=(r);i++)
#define rep_(i,l,r) for(int i=(l);i>=(r);i--)
#define all(i) i.begin() + 1,i.begin() + n + 1
#define pii pair<int,int>
#define V vector
#define F first
#define S second
#define pb push_back
#define is insert
const int inf = 1LL << 62,N = 2e5 + 10;
const double pi = acos(-1);
// --------------- AC ---------------
int T,n,a[N],m,col[N];
V<pii> G[N];
V<int> key[N],door[N];
bool vis[N];
 
void O_o(){
    cin >> n >> m;
    for(int i = 1;i <= n;i++){
        cin >> a[i];
    }
    for(int i = 1;i <= m;i++){
        int num;cin >> num;
        for(int j = 1;j <= num;j++){
            int x;cin >> x;
            key[i].push_back(x);
            door[x].push_back(i);
        }
    }
    for(int i = 1;i <= n;i++){
        int u = door[i][0],v = door[i][1];
        G[u].push_back({v,a[i]});
        G[v].push_back({u,a[i]});
    }
    memset(vis,-1,sizeof vis);
    memset(col,-1,sizeof col);
    rep(i,1,m){
        if(col[i] != -1)continue;
        queue<int> q;
        q.push(i);
        col[i] = 1;
        while(!q.empty()){
            int u = q.front();
            q.pop();
            for(auto [v,w] : G[u]){
                if(w){
                    if(col[v] == -1){
                        col[v] = (col[u] == 1 ? 1 : 2);
                        q.push(v);
                    }else{
                        if(col[v] != col[u]){
                            cout << "NO" << '
';
                            return ;
                        }
                    }
                }else{
                    if(col[v] == -1){
                        col[v] = (col[u] == 1 ? 2 : 1);
                        q.push(v);
                    }else{
                        if(col[v] == col[u]){
                            cout << "NO" << '
';
                            return ;
                        }
                    }
                }
            }
        }
    }
    cout << "YES" << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    T = 1;
    while(T--)O_o();
    return 0;
}