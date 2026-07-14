#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 2e5 + 10,inf = 1e18;
int T,n;
 
void O_o(){
    cin >> n;
    int _1,_2,_3;
    _1 = _2 = _3 = 0;
    for(int i=1;i<=n;i++){
        int x;cin >> x;
        if(x == 1)_1++;
        if(x == 2)_2++;
        if(x == 0)_3++;
    }
    int ans = _3;
    int tmp = min(_1,_2);
    ans += tmp;
    ans += (_1 - min(_1,_2)) / 3;;
    cout << ans + (_2 - min(_1,_2)) / 3 << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> T;
    while(T--)O_o();
}