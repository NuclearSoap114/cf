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
int T,n,a[N];
set<int> inside;
 
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
 
    rep(i,1,n){
        cin >> a[i];
    }
 
    dsu.init(n + 1);
 
    map<int,int> mp;
    V<pii> ans;
 
    cout << "YES" << '
';
 
    rep_(i,n - 1,1){
        rep(j,1,n){
            int r = a[j] % i;
            if(mp[r]){
                if(!dsu.same(mp[r],j)){
                    dsu.merge(mp[r],j);
                    ans.pb({mp[r],j});
                    break;
                }
            }else{
                mp[r] = j;
            }
        }
        mp.clear();
    }
 
    reverse(ans.begin(),ans.end());
    int mod = 1;
    for(auto &[u,v] : ans){
        // cout << mod++ << ' ';
        // cout << a[u] - a[v] << ' ';
        cout << u << ' ' << v << '
';
        // if(abs(a[u] - a[v]) % (mod++) != 0){
        //     cout << "NO" << '
';
        //     return ;
        // }
    }
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> T;
    while(T--)O_o();
    return 0;
}