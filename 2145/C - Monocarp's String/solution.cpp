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
string s;
 
void O_o(){
    cin >> n >> s;
    s = '#' + s;
    V<int> pre(n + 1,0);
    map<int,int> mp;
    rep(i,1,n){
        pre[i] = pre[i - 1] + (s[i] == 'a' ? 1 : -1);
    }
    int sum = pre[n];
    int ans = inf;
    if(sum == 0){
        cout << 0 << '
';
        return ;
    }
    mp[0] = 0;
    rep(r,1,n){
        int l_ = pre[r] - sum;
        if(mp.count(l_)){
            ans = min(ans,r - mp[l_]);
        }
        mp[pre[r]] = r;
    }
    if(ans == n)cout << -1 << '
';
    else cout << ans << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> T;
    while(T--)O_o();
    return 0;
}