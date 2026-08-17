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
int T,n,m,k;
 
int cnt(int x){
    int res = 0;
    rep(i,1,m){
        res += min(n,x / i);
    }
    return res;
}
 
void O_o(){
    cin >> n >> m >> k;
    int l = 0,r = n * m + 1;
    while(l + 1 != r){
        int mid = l + r >> 1;
        if(cnt(mid) >= k)r = mid;
        else l = mid;
    }
    cout << r << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    T = 1;
    while(T--)O_o();
    return 0;
}