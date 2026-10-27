#include <bits/stdc++.h>
using namespace std;
#define int long long
int T,n;
 
void O_o(){
    cin >> n;
    int a = 1;
    for(int i=1;i<=n;i++){
        cout << a * (a + 3) << ' ';
        a += 3;
    }
    cout << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> T;
    while(T--)O_o();
    return 0;
}