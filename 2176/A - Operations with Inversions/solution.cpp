#include <bits/stdc++.h>
using namespace std;
#define int long long 
int n,T,ans;
void O_o(){
    ans = 0;
    cin >> n;
    vector<int> a(n + 1,0);
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
 
    for(int i=n;i>=1;i--){
        for(int j=i;j>=1;j--){
            if(a[i] < a[j]){
                ans++;
                break;
            }
        }
    }
 
    cout << ans << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    cin >> T;
    while(T--)O_o();
    return 0;
}