#include <bits/stdc++.h>
using namespace std;
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
    int p = 0;
    for(int i=1;i<=n;i++){
        if(a[i] != b[i]){
            p = i;
        }
    }
    if(p & 1){
        cout << "Ajisai" << '
';
    }else{
        cout << "Mai" << '
';
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    cin >> T;
    while(T--)O_o();
    return 0;
}