#include <bits/stdc++.h>
using namespace std;
#define int long long
int T,a,b,n;
void O_o(){
    cin >> a >> b >> n;
    if(a == b){
        cout << 1 << '
';
        return ;
    }
    if(min(b,a / n) == min(b,a)){
        cout << 1 << '
';
    }else{
        cout << 2 << '
';
    }
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    cin >> T;
    while(T--)O_o();
    return 0;
}