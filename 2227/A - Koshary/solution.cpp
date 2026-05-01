#include <bits/stdc++.h>
using namespace std;
int main(){
    int T;cin >> T;
    while(T--){
        int x,y;cin >> x >> y;
        int z = (x & 1) + (y & 1);
        if(z > 1)cout << "No" << '
';
        else cout << "Yes" << '
';
    }
    return 0;
}