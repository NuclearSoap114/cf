#include <bits/stdc++.h>
using namespace std;
#define int long long
int T,n;
 
void O_o(){
    cin >> n;
    vector<int> p(n + 1);
    p[n] = 1;
    for(int i = 2;i <= n - 1;i++){
        p[i] = i ^ 1;
    }
    if(n % 2 == 0){
        p[1] = n;
    } else{
        p[1] = n - 1;
    }
    for(int i = 1;i <= n;i++){
        cout << p[i] << ' '; 
    }
    cout << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
 
    cin >> T;
    while(T--)O_o();
    return 0;
}