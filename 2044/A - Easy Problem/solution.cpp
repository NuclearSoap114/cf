#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void O_o(){
    int n;cin >> n;
    int cnt = 0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i + j == n){
                cnt++;
            }
        }
    }
    cout << cnt << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
 
    int T;cin >> T;
    while(T--)O_o();
    return 0;
}