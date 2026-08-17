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
const int inf = 1LL << 62,N = 1e6 + 10;
const double pi = acos(-1);
// --------------- AC ---------------
int T,n,k,q,f[N][26],nxt[26],dp[N];
string s,t;
 
void O_o(){
    cin >> n >> k >> s;
    rep(i,0,k - 1)nxt[i] = -1;
    s = '#' + s;
    rep_(i,n,1){
        int x = s[i] - 'a';
        rep(j,0,k - 1)f[i][j] = nxt[j];
        nxt[x] = i;
    }
    rep(j,0,k - 1)f[0][j] = nxt[j];
    rep_(i,n,0){
        int mx = 0;
        bool done = 0;
        rep(j,0,k - 1){
            if(f[i][j] == -1){
                done = 1;
                break;
            }
            mx = max(mx,f[i][j]);
        }
        if(done)dp[i] = 1;
        else dp[i] = dp[mx] + 1;
    }
    cin >> q;
    while(q--){
        cin >> t;
        int p = 0;
        bool ok = 1;
        for(char c : t){
            int x = c - 'a';
            p = f[p][x];
            if(p == -1){
                ok = 0;
                break;
            }
        }
        if(!ok)cout << 0 << '
';
        else cout << dp[p] << '
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