#include <bits/stdc++.h>
using namespace std;
#define int long long
int n,k;
 
void O_o(){
    cin >> n >> k;
    vector<int> a(n + 1),suf(n + 2,0);
    for(int i = 1;i <= n;i++){
        cin >> a[i];
    }
    priority_queue<int> pq;
    for(int i = n;i >= 1;i--){
        suf[i] = suf[i + 1] + a[i];
        if(i - 1)pq.push(suf[i]);
    }
    int ans = suf[1];
    for(int i = 1;i < k;i++){
        ans += pq.top();
        pq.pop();
    }
    cout << ans << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    O_o();
    return 0;
}