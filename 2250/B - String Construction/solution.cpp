#include <bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i,l,r) for(int i=(l);i<=(r);i++)
const int inf = 1e18,N = 2e5 + 10;
int T,n,k;
 
void O_o(){
    cin >> n >> k;
    int c1 = k / 2;
    int c2 = k - c1;
    int need1 = c1 + 1,need0 = c2 + 1;
    if(need1 + need0 > n){
        cout << -1 << '
';
        return ;
    }
    rep(i,1,need1)cout << 1;
    rep(i,1,need0)cout << 0;
    rep(i,1,n - need1 - need0)cout << (1 & i);
    cout << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> T;
    while(T--)O_o();
    return 0;
}