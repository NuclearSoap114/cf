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
const int inf = 1LL << 62,N = 3e3 + 10;
const double pi = acos(-1);
// --------------- AC ---------------
int T,n,f[N][N],g[N][N];
 
void O_o(){
    cin >> n;
    V<int> a(n + 1);
    rep(i,1,n){
        cin >> a[i];
    }
    int mx = *max_element(all(a));
    rep(i,0,n){
        rep(j,0,mx){
            f[i][j] = g[i][j] = 0;
        }
    }
    rep(i,2,n){
        rep(j,1,mx){
            f[i][j] += f[i - 1][j] + (a[i - 1] == j);
        }
    }
    rep_(i,n - 1,1){
        rep(j,1,mx){
            g[i][j] += g[i + 1][j] + (a[i + 1] == j);
        }
    }
    int ans = 0;
    rep(i,2,n - 2){
        rep(j,i + 1,n - 1){
            ans += f[i][a[j]] * g[j][a[i]];
        }
    }
    cout << ans << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> T;
    while(T--)O_o();
    return 0;
}