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
    int ans = 0;
    cin >> n;
    V<int> a(n + 1);
    rep(i,1,n)cin >> a[i];
    rep(i,1,n){
        int L = 0,R = 0;
        rep(l,1,i - 1){
            if(a[l] > a[i])L++;
        }
        rep(r,i + 1,n){
            if(a[r] > a[i])R++;
        }
        ans += min(L,R);
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