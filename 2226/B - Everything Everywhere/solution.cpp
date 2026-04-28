#include <bits/stdc++.h>
using namespace std;
#define int long long
inline void fmx(int &a,int b){ if(a<b) a=b;}
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define _rep(i,a,b) for(int i=b;i>=a;i--)
#define all() a.begin() + 1,a.begin() + n + 1
const int inf = 1e18;
int T,n;
 
int gcd(int x,int y){
    if(y == 0)return x;
    return gcd(y,x % y);
}
 
void O_o(){
    int ans = 0;
    cin >> n;
    vector<int> a(n + 1);
 
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
 
    for(int i=2;i<=n;i++){
        if(abs(a[i] - a[i - 1]) == gcd(a[i],a[i - 1]))ans++;
    }
 
    cout << ans << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    cin >> T;
    while(T--)O_o();
    return 0;
}