#include <bits/stdc++.h>
using namespace std;
#define int long long
int T,n;
 
void O_o(){
    cin >> n;
    for(int i=1;i<=n;i++){
        cout << i << ' ' << n + i * 2 - 1 << ' ' << n + i * 2 << ' ';
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