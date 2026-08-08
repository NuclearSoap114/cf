#include <bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i,l,r) for(int i=(l);i<=(r);i++)
#define all() a.begin() + 1,a.begin() + n + 1
#define pii pair<int,int>
#define V vector
#define F first
#define S second
#define pb push_back
#define is insert
const int inf = 1LL << 62,N = 2e5 + 10;
const double pi = acos(-1);
// --------------- AC ---------------
int T,n;
 
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
 
 
void O_o(){
    cin >> n;
    V<int> p(n + 1),q(n + 1);
    rep(i,1,n)cin >> p[i];
    rep(i,1,n)cin >> q[i];
    dsu.init(n);
    rep(i,1,n){
        int u = p[i],v = i;
        dsu.merge(u,v);
    }
    set<int> vis;
    int ans = 0;
    rep(i,1,n){
        int x = dsu.find(q[i]);
        if(!vis.count(x)){
            ans += dsu.sz[x];
            vis.is(x);
        }
        cout << ans << ' ';
    }
    cout << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> T;
    while(T--)O_o();
    return 0;
}