#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 2e5 + 10,inf = 1e18;
int T,n;
 
void O_o(){
    //1 2 3 = 6
    //1 2 3 6 = 12
    //1 2 3 6 12 = 24
    cin >> n;
    if(n == 1){
        cout << 1 << '
';
        return ;
    }else if(n == 2){
        cout << -1 << '
';
        return ;
    }
    cout << 1 << ' ' << 2 << ' ' << 3 << ' ';
    for(int i=1;i<=n - 3;i++){
        cout << (3LL << i) << ' ';
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