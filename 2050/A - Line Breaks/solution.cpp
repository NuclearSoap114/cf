#include <bits/stdc++.h>
using namespace std;
#define int long long 
 
void O_o(){
    int n,m;cin >> n >> m;
    int len = 0;
    int ans = 0;
    bool f = 0;
    for(int i=0;i<n;i++){
        string tmp;cin >> tmp;
        len += tmp.size();
        if(len > m && !f){
            ans = i;
            f = 1;
        }
    }
    if(!f){
        cout << n << '
';
    }else{
        cout << ans << '
';
    }
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
 
    int T;cin >> T;
    while(T--)O_o();
    return 0;
}