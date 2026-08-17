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
const int inf = 1LL << 62,N = 1e5 + 10;
const double pi = acos(-1);
// --------------- AC ---------------
int T,n,m,dep[N];
 
void O_o(){
    cin >> n;
    dep[1] = 0;
    rep(i,2,n){
        int p;
        cin >> p;
        dep[i] = dep[p] + 1;
    }
    cin >> m;
    V<int> a(m);
    rep(i,0,m - 1)cin >> a[i];
    int id = 0;
    rep(i,1,m - 1){
        if(dep[a[i]] < dep[a[id]])id = i;
    }
    cout << m - 1;
    rep(i,0,m - 1){
        if(i != id)cout << ' ' << a[i];
    }
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