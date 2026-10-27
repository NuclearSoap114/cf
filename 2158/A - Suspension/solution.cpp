#include <bits/stdc++.h>
using namespace std;
#define int long long
int T,n,a,b;
void O_o(){
    cin >> n;
    cin >> a >> b;
    cout << min(n,a / 2 + b) << '
';
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    cin >> T;
    while(T--)O_o();
    return 0;
}