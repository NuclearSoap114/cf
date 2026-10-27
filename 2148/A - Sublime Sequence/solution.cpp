#include <bits/stdc++.h>
using namespace std;
#define inht long long
void O_o(){
    int x,n;cin >> x >> n;
    if(n & 1){
        cout << x << '
';
    }else{
        cout << 0 << '
';
        return ;
    }
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
 
    int T;cin >> T;
    while(T--)O_o();
    return 0;
}