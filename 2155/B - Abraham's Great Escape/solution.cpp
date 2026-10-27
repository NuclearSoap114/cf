#include <bits/stdc++.h>
using namespace std;
 
void O_o(){
    int n,k;cin >> n >> k;
    if(k == n * n - 1){
        cout << "NO" << '
';
        return ;
    }else{
        cout << "YES" << '
';
    }
    for(int i=1;i<=n;i++){
        bool f = 0;
        for(int j=1;j<=n;j++){
            if(k > 0){
                cout << 'U';
                k--;
                continue;
            }
            if(i != n){
                cout << 'D';
                continue;
            }
            if(f){
                cout << 'L';
                continue;
            }
            cout << 'R';
            f = 1;
        }
        cout << '
';
    }
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
 
    int T;cin >> T;
    while(T--)O_o();
    return 0;
}