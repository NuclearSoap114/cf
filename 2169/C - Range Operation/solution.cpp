#include <bits/stdc++.h>
using namespace std;
#define int long long
void O_o(){
    int n;cin >> n;
    vector<int> a(n+1),s(n+1),b(n+1);
    for(int i=1;i<=n;i++){
        cin >> a[i];
        s[i] = s[i-1] + a[i];
    }
    int ans = 0;
    priority_queue<int> pq;
    for(int i=1;i<=n;i++){
        pq.push(s[i-1] - i * i + i);
        ans = max(ans,pq.top() + s[n] - s[i] + i * i + i);
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