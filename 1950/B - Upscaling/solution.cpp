#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 2e5 + 10,inf = 1e18;
int T,n;
 
void O_o(){
    cin >> n;
    bool f = 0,ff;
    for(int i=1;i<=n;i++){
        f = !f;
        for(int j=1;j<=2 * n;j++){
            ff = ((j - 1) >> 1) & 1;
            if(f) cout << (!ff ? '#' : '.');
            else cout << (ff ? '#' : '.');
        }
        cout << '
';
        for(int j=1;j<=2 * n;j++){
            ff = ((j - 1) >> 1) & 1;
            if(f) cout << (!ff ? '#' : '.');
            else cout << (ff ? '#' : '.');
        }
        cout << '
';
    }
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> T;
    while(T--)O_o();
}