#include <bits/stdc++.h>
using namespace std;
#define int long long
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
 
    int n;cin >> n;
    for(int i=1;i<=n;i++){
        int tmp;cin >> tmp;
        if(tmp % 4 == 0){
            cout << "Bob" << '
';
        }else{
            cout << "Alice" << '
';
        }
    }
    return 0;
}