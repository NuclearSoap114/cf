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
const int inf = 1LL << 62,N = 2e5 + 10,mod = 1e9 + 7;
const double pi = acos(-1);
// --------------- AC ---------------
int T,n,b[N];
 
void O_o(){
    cin >> n;
    rep(i,1,n)cin >> b[i];
 
    map<int,int> mp;
    mp[0] = 1;
    int dp = 1,offset = 0;
 
    rep(i,1,n){
        int cnt = mp[-offset];
        int add = (dp - cnt + mod) % mod;
 
        offset += b[i];
        mp[b[i] - offset] = (mp[b[i] - offset] + add) % mod;
        dp = (dp + add) % mod;
    }
 
    cout << dp << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> T;
    while(T--)O_o();
    return 0;
}