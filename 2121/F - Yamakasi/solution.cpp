#include <bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i,l,r) for(int i=(l);i<=(r);i++)
#define rep_(i,l,r) for(int i=(l);i>=(r);i--)
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
int T,n,s,x;
 
void O_o(){
    cin >> n >> s >> x;
    V<int> a(n + 1);
    rep(i,1,n){
        cin >> a[i];
    }
    V<int> pre(n + 1,0);
    rep(i,1,n){
        pre[i] = pre[i - 1] + a[i];
    }
    auto calc = [&](int mx) -> int {
        int res = 0;
        map<int,int> mp;
        mp[0] = 1;
        rep(i,1,n){
            if(a[i] > mx){
                mp.clear();
                mp[pre[i]] = 1;
                continue;
            }   
            res += mp[pre[i] - s];
            mp[pre[i]]++;
        }
        return res;
    };
    cout << calc(x) - calc(x - 1) << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> T;
    while(T--)O_o();
    return 0;
}