#include <bits/stdc++.h>
using namespace std;
#define int long long
int n,m,a;
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
 
    cin >> n >> m >> a;
    cout << ((n + a - 1) / a) * ((m + a - 1) / a) << '
';
    return 0;
}