#include <bits/stdc++.h>
using namespace std;
int T,n,k;
 
void O_o(){
    cin >> n >> k;
    vector<char> a(n + 1);
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    for(int i=1;i<=n - k;i++){
        if(a[i] == '1'){
            a[i] = '0';
            a[i + k] = (a[i + k] == '1' ? '0' : '1');
        }
    }
    for(int i=1;i<=n;i++){
        if(a[i] == '1'){
            cout << "NO" << '
';
            return ;
        }
    }
    cout << "YES" << '
';
    
}
 
int main(){
    cin >> T;
    while(T--)O_o();
    return 0;
}