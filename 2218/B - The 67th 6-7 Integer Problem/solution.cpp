#include <bits/stdc++.h>
using namespace std;
#define int long long
int T,x;
 
void O_o(){
    vector<int> a(8);
    for(int i=1;i<=7;i++){
        cin >> a[i];
    }
    sort(a.begin() + 1,a.begin() + 7 + 1);
    int ans = 0LL;
    for(int i=1;i<=6;i++){
        ans += (-1LL) * (a[i]);
    }
    ans += a[7];
    cout << ans << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> T;
    while(T--)O_o();
    return 0;
}