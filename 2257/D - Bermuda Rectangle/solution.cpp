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
int T,s,q;
 
void O_o(){
    cin >> s >> q;
    V<pii> v;
    // --------------- d 和 s / d ---------------
    for(int i=1;i*i<=s;i++){
        if(s % i == 0){
            v.pb({i,s / i});
            if(i * i != s)v.pb({s / i,i});
        }
    }
    sort(v.begin(),v.end());
    int m = v.size();
    V<int> pre(m);
    rep(i,0,m - 1){
        int l = (i == 0 ? 0 : v[i - 1].F);
        int len = v[i].F - l;
        pre[i] = len * v[i].S;
        if(i)pre[i] += pre[i - 1];
    }
 
    auto yz = [&](int x){
        int id = lower_bound(v.begin(),v.end(),make_pair(x,-inf)) - v.begin();
        int l = (id == 0 ? 0 : v[id - 1].F);
        int res = (id == 0 ? 0 : pre[id - 1]);
        res += (x - l) * v[id].S;
        return res;
    };
    
    while(q--){
        int x,y;cin >> x >> y;
        int lim = s / y;
        // int id = lower_bound(v.begin(),v.end(),make_pair(lim,inf)) - v.begin() - 1;
        int id = upper_bound(v.begin(),v.end(),make_pair(lim,inf)) - v.begin() - 1;
        int d = v[id].F;
        if(x <= d){
            cout << x * y << '
';
        }else{
            cout << d * y + yz(x) - yz(d) << '
';
        }
    }
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> T;
    while(T--)O_o();
    return 0;
}