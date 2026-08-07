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
    V<int> a(n + 1);
    rep(i,1,n)cin >> a[i];
    if(k > 1){
        sort(all(),greater<int>());
        cout << accumulate(a.begin() + 1,a.begin() + k + 2,0LL) << '
';
    }else{
        if(n == 2){
            cout << a[1] + a[2] << '
';
            return ;
        }
        int m = *max_element(a.begin() + 2,a.begin() + n) + max(a[1],a[n]);
        int e = a[1] + a[n];
        cout << max(m,e) << '
';
    }
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> T;
    while(T--)O_o();
    return 0;
}