#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
 
    int T;cin >> T;
    while(T--){
        int ans = -1;
        int x;cin >> x;
        for(int i=0;i<30;i++){
            for(int j=0;j<30;j++){
                int y = (1 << i) | (1 << j);
                if(y < x && x + y > (x ^ y) && y + (x ^ y) > x){
                    ans = y;
                    break;
                }
            }
        }
        cout << ans << '
';
    }
    return 0;
}