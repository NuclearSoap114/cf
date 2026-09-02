#include <bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i,l,r) for(int i=(l);i<=(r);i++)
#define V vector
int T,n;
 
void O_o(){
    cin >> n;
    V<int> a(n + 1),b(n + 1);
    int suma = 0,sumb = 0;
    rep(i,0,n - 1){
        cin >> a[i];
        suma ^= a[i];
    }
    rep(i,0,n - 1){
        cin >> b[i];
        sumb ^= b[i];
    }
    int x = suma ^ sumb;
    rep(i,0,n){
        a[i] ^= x;
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    cout << (a == b ? "YES" : "NO") << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> T;
    while(T--)O_o();
    return 0;
}