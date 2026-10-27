#include <bits/stdc++.h>
using namespace std;
#define int long long
int x,y,k;
bool check(int tmp){
    for(int i=1;i<=x;i++){
        tmp = tmp - tmp / y;
    }
    return tmp >= k;
}
void O_o(){
    cin >> x >> y >> k;
    int l = 0,r = 1e12;
    while(l + 1 != r){
        int m = l + r >> 1;
        if(check(m))r = m;
        else l = m;
    } 
    if(!check(r)) cout << -1 << "
";
    else cout << r << '
';
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    int T;cin >> T;
    while(T--)O_o();
    return 0;
}