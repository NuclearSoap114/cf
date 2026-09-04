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
    int ans = 0;
    cin >> n;
    V<int> a(n + 1);
    rep(i,1,n)cin >> a[i];
    V<pii> b;
    int cur = 1;
    rep(i,2,n){
        if(a[i] == a[i - 1]){
            cur++;
        }else{
            b.pb({a[i - 1],cur});
            cur = 1;
        }
    }
    b.pb({a[n],cur});
    int m=b.size();
 
    rep(i,0,m-2){
        if(b[i].S>=2 && b[i+1].S>=2)
            ans=2;
    }
 
    rep(i,0,m-1){
        if(b[i].S<2)continue;
 
        if(i+1<m && (i+2>=m || b[i+2].F!=b[i].F))
            ans=max(ans,1LL);
 
        if(i-1>=0 && (i-2<0 || b[i-2].F!=b[i].F))
            ans=max(ans,1LL);
    }
    cout << ans + b.size() << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> T;
    while(T--)O_o();
    return 0;
}