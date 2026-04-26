#include <bits/stdc++.h>
using namespace std;
#define int long long
inline void fmx(int &a,int b){ if(a<b) a=b;}
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define _rep(i,a,b) for(int i=b;i>=a;i--)
#define all() a.begin() + 1,a.begin() + n + 1
const int inf = 1e18;
int T,n,m,d;
 
void O_o(){
    int ans = 0;
    cin >> n >> m >> d;
    int mx = (d / m + 1);
    while(n > 0){
        while(n < mx)mx--;
        ans += n / mx;
        n -= mx * (n / mx);
    }
    cout << ans << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    cin >> T;
    while(T--)O_o();
}