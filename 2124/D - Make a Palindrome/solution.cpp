#include <bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i,l,r) for(int i=(l);i<=(r);i++)
#define rep_(i,l,r) for(int i=(l);i>=(r);i--)
#define all(i) i.begin(),i.end()
#define pii pair<int,int>
#define V vector
#define F first
#define S second
#define pb push_back
#define is insert
const int inf = 1LL << 62,N = 2e5 + 10;
const double pi = acos(-1);
// --------------- AC ---------------
int T,n,k;
 
void O_o(){
    cin >> n >> k;
    V<int> a(n + 1);
    rep(i,1,n)cin >> a[i];
    auto b = a;sort(b.begin() + 1,b.begin() + n + 1);int x = b[k - 1];
    V<int> c,d;
    rep(i,1,n){
        if(a[i] < x)d.pb(a[i]);
        if(a[i] <= x)c.pb(a[i]);
    }
    auto dd = d;reverse(all(dd));if(dd != d){cout << "NO" << '
';return ;}
    int cur = 0;V<int> g;
    for(int v : c){
        if(v == x){
            cur++;
        }else{
            g.pb(cur);
            cur = 0;
        }
    }
    g.pb(cur);
    if(d.empty()){
        cout << "YES" << '
';
        return;
    }
    int need = k - 1 - d.size();
    if(need <= 0){
        cout << "YES" << '
';
        return ;
    }
    int keep = 0;
    int m = d.size();
    for(int i=0;i<(m+1)/2;i++){
        keep += 2 * min(g[i],g[m-i]);
    }
    if(m % 2 == 0){
        keep += g[m/2];
    }
    cout << (keep >= need ? "YES" : "NO") << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> T;
    while(T--)O_o();
    return 0;
}