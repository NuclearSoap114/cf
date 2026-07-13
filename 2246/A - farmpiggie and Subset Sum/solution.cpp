#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 2e5 + 10,inf = 1e18;
int T,n;
 
void O_o(){
    // 4 3 2 1
    // 4 6 6 4
    // 6 5 4 3 2 1
    // 6 10 12 12 10 6
    cin >> n;
    for(int i=n;i>=1;i--){
        cout << i << ' ';
    }
    cout << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> T;
    while(T--)O_o();
}