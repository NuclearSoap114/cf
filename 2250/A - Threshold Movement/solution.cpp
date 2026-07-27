#include <bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i,l,r) for(int i=(l);i<=(r);i++)
const int inf = 1e18,N = 2e5 + 10;
int T,n;
 
void O_o(){
    cin >> n;
    vector<int> a(n + 1);
    rep(i,1,n)cin >> a[i];
    if(n & 1){
        cout << "NO" << '
';
        return ;
    }
 
    int L = -inf,R = inf;
 
    auto merge = [&](int l,int r) {
        L = max(L,l);
        R = min(R,r);
        if(R - L <= 1){
            return false;
        }
        return true;
    };
 
    for(int i=1;i<=n;i+=2){
        int l = a[i + 1],r = a[i];
        if(l >= r){
            cout << "NO" << '
';
            return ;
        }else if(!merge(l,r)){
            cout << "NO" << '
';
            return ;
        }
    }
 
    cout << "YES" << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> T;
    while(T--)O_o();
    return 0;
}