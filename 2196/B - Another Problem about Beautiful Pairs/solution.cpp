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
int T,n,ans,cnt,mx;
 
void O_o(){
    ans = 0;
    cin >> n;
    V<int> a(n + 1);
    rep(i,1,n) cin >> a[i];
    int B = sqrt(n);
    rep(i,1,n){
        int x = a[i];
 
        if(x > B){
            for(int y = 1;i - x * y >= 1;y++){
                if(a[i - x * y] == y) ans++;
            }
 
            for(int y = 1;i + x * y <= n;y++){
                if(a[i + x * y] == y) ans++;
            }
        }else{
            for(int y = 1;y <= B && i - x * y >= 1;y++){
                if(a[i - x * y] == y) ans++;
            }
        }
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