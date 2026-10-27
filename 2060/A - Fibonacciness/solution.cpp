#include <bits/stdc++.h>
using namespace std;
#define int long long 
 
void deal(){
    int a,b,c,d;cin >> a >> b >> c >> d;
    int ans = -1;
    for(int i=-1000;i<=1000;i++){
        int cnt = 0;
        if(a + b == i)cnt++;
        if(b + i == c)cnt++;
        if(i + c == d)cnt++;
        ans = max(ans,cnt);
    }
    cout << ans << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
 
    int T;cin >> T;
    while(T--)deal();
    return 0;
}