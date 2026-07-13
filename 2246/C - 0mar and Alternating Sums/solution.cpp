#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 2e5 + 10,inf = 1e18,mod = 1e9 + 7;
int T,n,pw[N],d,adj;
 
void init(){
    pw[0] = 1;
    pw[1] = 2;
    for(int i=2;i<N - 5;i++){
        pw[i] = (pw[i - 1] * 2) % mod;
    }
}
 
// 2^(n-d)
void O_o(){
    d = adj = 0;
    d++;
    cin >> n;
    vector<int> a(n + 1);
    set<int> st;
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    for(int i=2;i<=n;i++){
        if(a[i] != a[i - 1]){
            d++;
            if(a[i - 1] != -1 && a[i] == a[i - 1] + 1)adj++;
        }
    }
    int ans = pw[n - d];
    if(a[1] == -1){
        ans = ((ans % mod) * ((adj + 1) % mod)) % mod;
    }
    cout << ans << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    init();
    cin >> T;
    while(T--)O_o();
}