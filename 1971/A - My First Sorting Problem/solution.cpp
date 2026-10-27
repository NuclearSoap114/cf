#include <bits/stdc++.h>
using namespace std;
#define int long long
int n,x,y,T;
void O_o(){
    cin >> x >> y;
    int z = min(x,y);
    cout << z << ' ' << x + y - z << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    cin >> T;
    while(T--)O_o();
    return 0;
}