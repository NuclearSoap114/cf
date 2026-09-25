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
int T,n,q;
 
void O_o(){
    cin >> n >> q;
    V<int> a(n);
    rep(i,0,n - 1)cin >> a[i];
    V<int> ans;
    int mn = *min_element(all(a));
    int mx = *max_element(all(a));
    ans.pb(mx - mn);
    int lim = (n == 5 ? 60 : 30);
    rep(_,1,lim){
        V<int> b;
        b.reserve(n * (n - 1) / 2);
        rep(i,0,n - 1){
            rep(j,i + 1,n - 1){
                b.pb(a[i] ^ a[j]);
            }
        }
        nth_element(b.begin(),b.begin() + n,b.end());
        b.resize(n);
        a = b;
        mn = *min_element(all(a));
        mx = *max_element(all(a));
        ans.pb(mx - mn);
        if(mx == 0)break;
    }
    while(q--){
        int x;cin >> x;
        if(x < ans.size()){
            cout << ans[x] << '
';
        }else{
            cout << 0 << '
';
        }
    }
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> T;
    while(T--) O_o();
    return 0;
}