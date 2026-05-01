#include <bits/stdc++.h>
using namespace std;
int main(){
    int T;cin >> T;
    while(T--){
        int a = 0,b = 0;
        int n;cin >> n;
        for(int i=1;i<=n;i++){
            char c;cin >> c;
            if(c == '(')a++;
            else b++;
        }
        
            cout << (a == b ? "Yes" : "No") << '
';
    }
    return 0;
}