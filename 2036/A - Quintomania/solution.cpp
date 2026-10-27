#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void O_o(){
    int n;cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=1;i<n;i++){
        if(abs(a[i] - a[i-1]) != 5 && abs(a[i] - a[i-1]) != 7){
            cout << "NO" << '
';
            return ;
        }
    }
    cout << "YES" << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
 
    int T;cin >> T;
    while(T--)O_o();
    return 0;
}