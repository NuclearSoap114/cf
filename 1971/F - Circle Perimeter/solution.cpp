#include <bits/stdc++.h>
using namespace std;
#define int long long
inline void fmx(int &a,int b){ if(a<b) a=b;}
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define _rep(i,a,b) for(int i=b;i>=a;i--)
#define all() a.begin() + 1,a.begin() + n + 1
const int inf = 1e18;
int T,n,r,l,mid,ans,RR;
 
// r * r <= x * x + y * y < (r + 1) * (r + 1)
 
void O_o(){
    cin >> RR;
    ans = 0;
    for(int x=0;x<=RR + 1;x++){
        l = -1,r = 2e5 + 10;
        int L,R;
        while(l + 1 != r){
            mid = (l + r) >> 1;
            if(RR * RR > x * x + mid * mid){
                l = mid;
            }else{
                r = mid;
            }
        }
        // cout << l << ' ' << r << '
';
        L = r;
        l = -1,r = 2e5 + 10;
        while(l + 1 != r){
            mid = (l + r) >> 1;
            if(x * x + mid * mid < (RR + 1) * (RR + 1)){
                l = mid;
            }else{
                r = mid;
            }
        }
        R = l;
        // cout << l << ' ' << r << '
';
        ans += (R - L + 1) * 4;
    }
    cout << ans - 4 << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    cin >> T;
    while(T--)O_o();
}