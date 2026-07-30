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
const int inf = 1e18,N = 2e5 + 10,mod = 1e9 + 7;
const double pi = acos(-1);
// --------------- AC ---------------
int T,n,m;
int fac[22];
 
int qp(int a,int b){
    int res = 1;
    while(b){
        if(b & 1)res = res * a % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return res;
}
 
int inv(int x){
    return qp(x,mod - 2);
}
 
void init(){
    fac[0] = 1;
    rep(i,1,21){
        fac[i] = fac[i - 1] * i % mod;
    }
}
 
int C(int a,int b){
    if(a < b || a < 0)return 0;
    int res = 1;
    for(int i=a;i>=a - b + 1;i--){
        res = res * (i % mod) % mod;
    }
    return res * inv(fac[b]) % mod;
}
 
void O_o(){
    cin >> n >> m;
    V<int> a(n);
    // C(k + n - 1,n - 1)
    for(int &x : a)cin >> x;
    int ans = C(m + n - 1,n - 1);
    rep(st,1,(1 << n) - 1){
        int cnt = __builtin_popcount(st);
        int tmp = st;
        int sum = 0;
        while(tmp){
            int lowbit = tmp & -tmp;
            int pos = __builtin_ctz(lowbit);
            sum += a[pos] + 1;
            tmp ^= lowbit;
        }
        int num = C(m - sum + n - 1,n - 1);
        if(cnt & 1){
            ans = (ans - num + mod) % mod;
        }else{
            ans = (ans + num) % mod;
        }
    }
    cout << ans << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    T = 1;
    init();
    while(T--)O_o();
    return 0;
}