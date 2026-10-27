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
    cin >> n;
    V<int> cnt(110,0);
    rep(i,1,n){
        int x; cin >> x;
        cnt[x]++;
    }
 
    rep(k,1,n){
        rep_(x,100,1){
            if(cnt[x] >= k){
                cout << x << ' ';
            }
        }
    }
    cout << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> T;
    while(T--) O_o();
    return 0;
}