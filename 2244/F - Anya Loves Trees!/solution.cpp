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
int T,n,p[N],mn[N],mx[N],cnt[N],leaf[N];
bool ok[N];
V<int> G[N];
V<pii> b[N];
 
void dfs(int u,int fa){
    ok[u] = true;
    if(leaf[u]){
        cnt[u] = 1;
        mx[u] = mn[u] = leaf[u];
        return ;
    }
    for(int v : G[u]){
        if(v == fa)continue;
        dfs(v,u);
        if(!ok[v]){
            ok[u] = false;
            return ;
        }
        mn[u] = min(mn[u],mn[v]);
        mx[u] = max(mx[u],mx[v]);
        cnt[u] += cnt[v];
        b[u].pb({mn[v],mx[v]});
    }
    if(mx[u] - mn[u] + 1 != cnt[u]){
        ok[u] = false;
        return ;
    }
    vector<pii> s = b[u];
    int len = s.size();
    int tmp = 0;
    for(int i=0;i<len;i++){
        int l,r;
        if(i == 0)l = s[len - 1].S;
        else l = s[i - 1].S;
        r = s[i].F;
        if(l + 1 != r){
            tmp++;
            if(tmp > 1)break;
        }
    }
    if(tmp != 1){
        ok[u] = false;
    }
}
 
void O_o(){
    cin >> n;
    rep(i,0,n){
        G[i].clear();
        b[i].clear();
        mn[i] = inf;
        mx[i] = -inf;
        cnt[i] = 0;
    }
    rep(i,2,n){
        cin >> p[i];
        G[p[i]].pb(i);
        G[i].pb(p[i]);
    }
    rep(i,1,n){
        cin >> leaf[i];
    }
    dfs(1,0);
    if(ok[1]){
        cout << "YES" << '
';
    }else{
        cout << "NO" << '
';
    }
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> T;
    while(T--)O_o();
    return 0;
}