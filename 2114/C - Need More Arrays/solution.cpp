#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void O_o(){
    int n;cin >> n;
    int ans = 1;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    if(n == 0){
        cout << 0 << '
';
        return ;
    }
    int cur = a[0];
    for(int i=1;i<n;i++){
        if(a[i] - cur >= 2){
            ans++;
            cur = a[i];
        }
    }
    cout << ans << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
 
    int T;cin >> T;
    while(T--)O_o();
    return 0;
}