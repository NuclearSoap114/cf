#include <bits/stdc++.h>
using namespace std;
int T,n,k;
 
void O_o(){
    cin >> n >> k;
    for(int i = 1;i <= k;i++){
        cout << 1;
    }
    for(int i = 1;i <= n - k;i++){
        cout << 0;
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