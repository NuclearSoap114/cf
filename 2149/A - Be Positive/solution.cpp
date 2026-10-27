#include <bits/stdc++.h>
using namespace std;
#define int long long
void O_o(){
    int n;cin >> n;
    int cnt = 0;
    int ans = 0;
    for(int i=0;i<n;i++){
        int x;cin >> x;
        if(x == 0)ans++;
        if(x == -1)cnt++;
    }
    if(cnt % 2 == 1)ans+=2;
    cout << ans << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
 
    int T;cin >> T;
    while(T--)O_o();
    return 0;
}