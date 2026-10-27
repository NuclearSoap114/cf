#include <bits/stdc++.h>
using namespace std;
#define int long long
int T,x,y,z;
 
void O_o(){
    bool f = 1;
    cin >> x >> y;
    int z = x - (y * 2);
    if(z < 0 || z % 3 != 0)f = 0;
    if(6 * max(0LL,-y) > z)f = 0;
    cout << (f ? "YES" : "NO") << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> T;
    while(T--)O_o();
    return 0;
}