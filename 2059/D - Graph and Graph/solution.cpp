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
const int inf = 1LL << 62,N = 2e3 + 10;
const double pi = acos(-1);
// --------------- AC ---------------
int T,n,s1,s2,m1,m2,cnt,id[N][N];
V<int> g1[N],g2[N];
 
void O_o(){
    cnt = 1;
    set<pii> st;
 
    cin >> n >> s1 >> s2;
    V<bool> good(n + 1,false);
    rep(i,1,n){
        g1[i].clear();
        g2[i].clear();
    }
 
    cin >> m1;
    rep(i,1,m1){
        int u,v;cin >> u >> v;
        st.is({max(u,v),min(u,v)});
        g1[u].pb(v);
        g1[v].pb(u);
    }
 
    cin >> m2;
    rep(i,1,m2){
        int u,v;cin >> u >> v;
        g2[u].pb(v);
        g2[v].pb(u);
        if(st.count(make_pair(max(u,v),min(u,v)))){
            good[u] = good[v] = true;
        }
    }
 
    unordered_map<int,pii> mp;
    rep(i,1,n){
        rep(j,1,n){
            id[i][j] = cnt;
            mp[cnt] = make_pair(i,j);
            cnt++;
        }
    }
 
    priority_queue<pii,V<pii>,greater<pii>> pq;
    V<bool> vis(cnt + 1,false);
    V<int> d(cnt + 1,inf);
 
    d[id[s1][s2]] = 0;
    pq.push(make_pair(0,id[s1][s2]));
 
    while(!pq.empty()){
        auto [dis,now] = pq.top();
        pq.pop();
 
        if(vis[now])continue;
        vis[now] = true;
 
        int x = mp[now].F;
        int y = mp[now].S;
 
        for(int u : g1[x]){
            for(int v : g2[y]){
                if(d[id[u][v]] > dis + abs(u - v)){
                    d[id[u][v]] = dis + abs(u - v);
                    pq.push(make_pair(d[id[u][v]],id[u][v]));
                }
            }
        }
    }
 
    int ans = inf;
    rep(i,1,n){
        if(good[i]){
            ans = min(ans,d[id[i][i]]);
        }
    }
 
    cout << (ans == inf ? -1 : ans) << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> T;
    while(T--)O_o();
    return 0;
}