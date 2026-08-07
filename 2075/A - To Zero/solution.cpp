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
    if(n <= k){
        cout << 1 << '
';
        return ;
    }
    int ans = 0;
    int kk = k - 1;
    if(k & 1){
        if(n & 1){
            n -= k;
            ans++;
        }
    }
    int odd = k % 2 == 1 ? k : k - 1;
    int even = k % 2 == 0 ? k : k - 1;
    if(n & 1){
        ans += (n + odd - 1) / odd;
    }else{
        ans += (n + even - 1) / even;
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