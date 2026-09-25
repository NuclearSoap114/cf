#include <bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i,l,r) for(int i=(l);i<=(r);i++)
#define rep_(i,l,r) for(int i=(l);i>=(r);i--)
#define all(i) i.begin(),i.end()
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
    V<int> cnt(n + 1,0);
    rep(i,1,n){
        int x;cin >> x;
        if(i & 1){
            cnt[x] = 1;
        }else{
            cnt[x] = -1;
        }
    }
    int now = 0;
    bool ok = 1;
    rep_(x,n - 1,1){
        now -= cnt[x] * cnt[n];
        if(now < 0 || now > 2){
            cout << "NO" << '
';
            return ;
        }
    }
    cout << "YES" << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> T;
    while(T--)O_o();
    return 0;
}