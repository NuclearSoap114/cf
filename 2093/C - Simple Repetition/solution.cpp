#include <bits/stdc++.h>
using namespace std;
#define int long long 
// bool prime[MAXN];
 
bool isp(int n){
    if(n < 2)return false;
    for(int i=2;i<=sqrt(n);i++){
        if(n % i == 0)return false; 
    }
    return true;
}
 
void O_o(){
    int n,k;cin >> n >> k;
    if(n >= 2 && k >= 2){
        cout << "No" << '
';
        return ;
    }
    if(n == 1){
        for(int i=0;i<k-1;i++){
            n *= 10;
            n += 1;
        }
        if(isp(n)){
            cout << "Yes" << '
';
        }else{
            cout << "No" << '
';
        }
        return ;
    }
    if(k == 1){
        if(isp(n)){
            cout << "Yes" << '
';
        }else{
            cout << "No" << '
';
        }
        return ;
    }
}   
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
 
    // for (int i = 0; i < MAXN; i++) prime[i] = 1;
    // prime[0] = prime[1] = 0;
	// for (int i = 2; i * i < MAXN; i++) {
	//     if (!prime[i]) continue;
	//     for (int j = i * i; j < MAXN; j += i) 
    //         prime[j] = 0;
	// }
 
    int T;cin >> T;
    while(T--)O_o();
    return 0;
}