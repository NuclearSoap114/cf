#include <bits/stdc++.h>
using namespace std;
#define int long long
int T,n,k;
int x,y;
int p,cnt;
 
void f(int num){
    p = 1;
    cnt = -1;
    for(int i = 0;i <= 31;i++){
        int L = p * (k - 1) + 1;
        int R = p * (k + 1) - 1;
        if(L <= n && n <= R){
            cnt = i;
            return;
        }
        p <<= 1;
    }
}
 
void O_o(){
    cin >> n >> k;
    if(k > n){
        cout << -1 << '
';
        return;
    }
    f(k);
    cout << cnt << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
 
    cin >> T;
    while(T--)O_o();
    return 0;
}