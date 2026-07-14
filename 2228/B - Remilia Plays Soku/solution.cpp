#include <bits/stdc++.h>
using namespace std;
#define int long long
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;cin >> T;
    while(T--){
        int n,a,b,k;cin >> n >> a >> b >> k;
        if(a > b)swap(a,b);
        if(a == b){
            cout << 0 << '
';
            continue;
        }
        if(n <= 3){
            cout << 1 << '
';
        }else{
            cout << k + min(b - a,n - b + a) << '
';
        }
    }
    return 0;
}