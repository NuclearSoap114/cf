#include <bits/stdc++.h>
using namespace std;
#define int long long
int T,n,k;
 
void O_o(){
    cin >> n >> k;
    if(k < n || k > n * 2 - 1){
        cout << "NO" << '
';
        return ;
    }
    cout << "YES" << '
';
    if(k == n){
        for(int i=1;i<=n;i++){
            cout << i << ' ' << i << ' ';
        }
        cout << '
';
        return ;
    }
    int chaos = k - n + 1;
    int oth = n - chaos;
    //  1 2 3 1 4 2 5 3 6 4
    cout << 1 << ' ' << 2 << ' ';
    for(int i=3;i<=chaos;i++){
        cout << i << ' ' << i - 2 << ' ';
    }
    cout << chaos - 1 << ' ' << chaos << ' ';
    for(int i=chaos + 1;i<=n;i++){
        cout << i << ' ' << i << ' ';
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