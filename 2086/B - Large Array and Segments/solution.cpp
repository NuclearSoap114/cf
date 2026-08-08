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
int T,n,k,x;
 
void O_o(){
    int n,k,x;
    cin >> n >> k >> x;
 
    V<int> a(n + 1);
    int sum = 0;
 
    rep(i,1,n){
        cin >> a[i];
        sum += a[i];
    }
 
    if(sum * k < x){
        cout << 0 << '
';
        return ;
    }
 
    int cnt = (x - 1) / sum;
    int rem = x - cnt * sum;
 
    int cur = 0,len = 0;
 
    for(int i = n;i >= 1;i--){
        cur += a[i];
        len++;
        if(cur >= rem)break;
    }
 
    int need = cnt * n + len;
 
    cout << n * k - need + 1 << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> T;
    while(T--)O_o();
    return 0;
}