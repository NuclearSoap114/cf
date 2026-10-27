#include <bits/stdc++.h>
using namespace std;
#define int long long
int T,n,k;
 
void O_o(){
    cin >> n;
    vector<int> a(n + 1),b(n + 1);
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    for(int i=1;i<=n;i++){
        cin >> b[i];
    }
    int mx = 0,mn = 0;
    for(int i=1;i<=n;i++){
        int max_now = max(mx - a[i],b[i] - mn);
        int min_now = min(mn - a[i],b[i] - mx);
        mx = max_now;
        mn = min_now;
    }
    cout << mx << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    cin >> T;
    while(T--)O_o();
    return 0;
}