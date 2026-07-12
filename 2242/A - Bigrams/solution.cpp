#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 2e5 + 10,inf = 1e18;
int T,n;
 
void O_o(){
    cin >> n;
    bool f = 0;
    int c = 0;
    for(int i=1;i<=n;i++){
        int tmp;cin >> tmp;
        if(tmp >= 3)f = 1;
        else if(tmp >= 2)c++;
    }
    if(f || c >= 2){
        cout << "YES" << '
';
    }else{
        cout << "NO" << '
';
    }
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> T;
    while(T--)O_o();
}