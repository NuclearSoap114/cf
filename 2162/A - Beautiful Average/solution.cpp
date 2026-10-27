#include <bits/stdc++.h>
using namespace std;
int main(){
    int T;cin >> T;
    while(T--){
        int n;cin >> n;
        int ans = -1;
        for(int i=0;i<n;i++){
            int tmp;cin >> tmp;
            ans = max(ans,tmp);
        }
        cout << ans << '
';
    }
    return 0;
}