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
int T,n,m;
 
int calc(V<int> &a){
    int n = a.size();
    int ans = a[n-1];
    rep_(i,n - 2,0){
        ans += a[i] - a[i+1] + 1;
    }
    return ans;
}
 
void O_o(){
    cin >> n >> m;
    V<int> a(n),b(m);
    rep(i,0,n - 1)cin >> a[i];
    rep(i,0,m - 1)cin >> b[i];
    int ta = calc(a);
    int tb = calc(b);
    cout << (tb <= ta ? 1 : 2) << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> T;
    while(T--)O_o();
    return 0;
}