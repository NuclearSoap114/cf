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
int T,n,k;
 
void O_o(){
    cin >> n >> k;
    V<int> a(k + 1);
    rep(i,1,k)cin >> a[i];
    sort(a.begin() + 1,a.begin() + k + 1);
    int ans = 0;
    rep(i,1,n - 1){
        int j = n - i;
        int l = a.begin() + k + 1 - lower_bound(a.begin() + 1,a.begin() + k + 1,i);
        int r = a.begin() + k + 1 - lower_bound(a.begin() + 1,a.begin() + k + 1,j);
        ans += l * r - min(l,r);
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