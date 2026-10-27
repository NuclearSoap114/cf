#include <bits/stdc++.h>
using namespace std;
#define int long long
int T,n;
void O_o(){
    int ans = 0;
    cin >> n;
    if(n & 1){
        cout << 0 << '
';
        return ;
    }
    for(int i=0;i<=n;i++){
        int k = (n - i * 4);
        if(k >= 0 && k % 2 == 0) ans++;
    }
    cout << ans << '
';
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    cin >> T;
    while(T--)O_o();
    return 0;
}