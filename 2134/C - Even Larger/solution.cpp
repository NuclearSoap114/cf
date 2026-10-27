#include <bits/stdc++.h>
using namespace std;
 
void O_o(){
    int n;cin >> n;
    int a[200010];
    long long ans = 0;
    for(int i=1;i<=n;i++){
        cin >> a[i];
        ans += a[i];
    }
    if(n % 2 == 0){
        a[++n] = 0;
    }
    a[n+1] = a[0] = 1e9;
    for(int i=1;i<=n;i+=2){
        a[i] = min({a[i-1],a[i],a[i+1]});
    }
    for(int i=3;i<=n;i+=2){
        a[i] = min(a[i],a[i-1] - a[i-2]);
    }
    for(int i=1;i<=n;i++){
        ans -= a[i];
    }
    cout << ans << '
';
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
 
    int T;cin >> T;
    while(T--)O_o();
    return 0;
}