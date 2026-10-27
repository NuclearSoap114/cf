#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void deal(){
    int n,k;cin >> n >> k;
    int minn = INT_MAX,maxn = -1;
    for(int i=0;i<n;i++){
        int tmp;cin >> tmp;
        if(tmp < minn)minn = tmp;
        if(tmp > maxn)maxn = tmp;
    }
 
    int ans = min(abs(k-minn),abs(k-maxn))+(maxn-minn);
    cout << ans << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
 
    int _;cin >> _;
    while(_--)deal();
    return 0;
}