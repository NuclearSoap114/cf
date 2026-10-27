#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MAXN = 2e5 + 10;
int T,n,a[MAXN],b[MAXN];
void O_o(){
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }   
    for(int i=1;i<=n;i++){
        cin >> b[i];
    }
    int x = 0;
    for(int i=1;i<=n;i++){
        x ^= (a[i] ^ b[i]);
    }
    if(!x){
        cout << "Tie" << '
';
        return ;
    }
    int bit = 0;
    for(int i=0;i<=22;i++){
        if((x >> i) & 1){
            bit = i;
        }
    }
    int p = 0;
    for(int i=1;i<=n;i++){
        int aa = (a[i] >> bit) & 1;
        int bb = (b[i] >> bit) & 1;
        if(aa != bb){
            p = i;
        }
    }
    if(!p){
        cout << "Tie" << '
';
        return ;
    }
    if(p & 1){
        cout << "Ajisai" << '
';
    }else{
        cout << "Mai" << '
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