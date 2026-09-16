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
struct DSU{
    int fa[N],sz[N];
 
    void init(int n){
        for(int i=1;i<=n;i++){
            fa[i] = i;
            sz[i] = 1;
        }
    }
 
    int find(int x){
        if(x == fa[x])return x;
        return fa[x] = find(fa[x]);
    }
 
    bool merge(int a,int b){
        a = find(a);
        b = find(b);
 
        if(a == b)return false;
        if(sz[a] < sz[b])swap(a,b);
 
        fa[b] = a;
        sz[a] += sz[b];
        return true;
    }
 
    bool same(int a,int b){
        return find(a) == find(b);
    }
}dsu;
 
int T,n,c[N],k[N];
V<pii> G[N];
 
void O_o(){
    cin >> n;
    DSU d;
    d.init(n + 5);
 
    V<pii> a(n + 1);
 
    rep(i,1,n){
        cin >> a[i].F >> a[i].S;
    }
 
    rep(i,1,n){
        cin >> c[i];
    }
 
    rep(i,1,n){
        cin >> k[i];
    }
 
    priority_queue<pair<int,pair<int,int>>,
    V<pair<int,pair<int,int>>>,
    greater<pair<int,pair<int,int>>>> pq;
 
    rep(i,1,n){
        G[i].pb({c[i],n + 5});
        pq.push({c[i],{i,n + 5}});
    }
 
    auto dis = [&](int u,int v) -> int {
        return abs(a[u].F - a[v].F) + abs(a[u].S - a[v].S);
    };  
 
    rep(i,1,n){
        rep(j,i + 1,n){
            G[i].pb({(k[i] + k[j]) * dis(i,j),j});
            pq.push({(k[i] + k[j]) * dis(i,j),{i,j}});
        }
    }
 
    int v = 0,e = 0,ans = 0,cnt = 0;
    V<pii> ee;
    V<int> vv;
 
    while(!pq.empty()){
        auto now = pq.top();
        pq.pop();
        if(d.same(now.S.F,now.S.S))continue;
        d.merge(now.S.F,now.S.S);
        if(now.S.F == n + 5 || now.S.S == n + 5){
            v++;
            vv.pb(now.S.F == n + 5 ? now.S.S : now.S.F);
        }else{
            e++;
            ee.pb({now.S.F,now.S.S});
        }
        ans += now.F;
        cnt++;
        if(cnt >= n)break;
    }
 
    cout << ans << '
';
 
    cout << v << '
';
 
    for(int &x : vv){
        cout << x << ' ';
    }
    cout << '
';
 
    cout << e << '
';
 
    for(auto &[u,v] : ee){
        cout << u << ' ' << v << '
';
    }
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    T = 1;
    while(T--)O_o();
    return 0;
}