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
int T,n,m,d[N];
bool vis[N];
V<pii> G[N];
 
void O_o(){
    cin >> n >> m;
    
    rep(i,1,n){
        G[i].clear();
        vis[i] = 0;
    }
 
    rep(i,1,m){
        int u,v,w;cin >> u >> v >> w;
        G[u].pb({w << 1,v});
        G[v].pb({w << 1,u});
    }
 
    priority_queue<pii,V<pii>,greater<pii>> pq;
 
    rep(i,1,n){
        cin >> d[i];
        pq.push({d[i],i});
    }
 
    while(!pq.empty()){
        auto [dist,u] = pq.top();
        pq.pop();
        if(vis[u])continue;
        vis[u] = 1;
 
        for(auto [w,v] : G[u]){
            if(d[u] + w < d[v]){
                d[v] = d[u] + w;
                pq.push({d[v],v});
            }
        }
    }
 
    rep(i,1,n){
        cout << d[i] << ' ';
    }
    cout << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    T = 1;
    while(T--)O_o();
    return 0;
}