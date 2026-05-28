#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;cin >> T;
    while(T--){
        int n;
        cin >> n;
        int s = 0,ones = 0,slots = 0;
        for(int i = 0;i < n;i++){
            int x;cin >> x;
            s += x;
            if(x == 1){
                ones++;
            } else{
                slots += x / 2 - 1;
            }
        }
        if(ones == n - 1){
            slots++;
        }
        int wasted = max(0LL,ones - slots),ans = s - wasted;
        if(ans < 3){
            cout << 0 << '
';
        } else{
            cout << ans << '
';
        }
    }
    return 0;
}