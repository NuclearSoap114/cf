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
int T,n;
 
void O_o(){
    int m;
    cin >> n >> m;
    bool have[26] = {0};
    rep(i,1,n){
        string s;
        cin >> s;
        have[s[0]-'a'] = 1;
    }
    V<string> a(m);
    rep(i,0,m-1) cin >> a[i];
    V<bool> vis(m);
    int cnt = 0;
    while(1){
        bool ok = 0;
        rep(i,0,m-1){
            if(vis[i]) continue;
            bool can = 1;
            for(char c:a[i]){
                if(!have[c-'A']){
                    can = 0;
                    break;
                }
            }
            if(can){
                vis[i] = 1;
                cnt++;
                have[a[i][0]-'A'] = 1;
                ok = 1;
            }
        }
        if(!ok) break;
    }
    cout << (cnt == m ? "YES" : "NO") << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> T;
    while(T--)O_o();
    return 0;
}