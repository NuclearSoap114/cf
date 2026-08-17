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
int T,n,ans,s,sum;
 
void O_o(){
    s = ans = sum = 0;
    cin >> n;
    V<int> a(n + 1),pre(n + 1,0),cnt(n + 1,0);
    rep(i,1,n)cin >> a[i];
    sum = accumulate(a.begin() + 1,a.begin() + n + 1,0LL);
    if(sum % 3 != 0){
        cout << 0 << '
';
        return ;
    }
    s = sum / 3;
    rep(i,1,n){
        pre[i] = pre[i - 1] + a[i];
        cnt[i] = cnt[i - 1] + (pre[i] == s);
    }
    rep(j,2,n - 1){
        if(pre[j] == s * 2){
            ans += cnt[j - 1];
        }
    }
    cout << ans << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    T = 1;
    while(T--)O_o();
    return 0;
}