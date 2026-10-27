#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n, k;
    cin >> n >> k;
    unordered_map<int, int> cnt;
    
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        cnt[x]++;
    }
    
    int ans = 0;
    for (int x = 1; x <= k / 2; x++) {
        int y = k - x;
        if (x == y) {
            ans += cnt[x] / 2;
        } else {
            ans += min(cnt[x], cnt[y]);
        }
    }
    
    cout << ans << '
';
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    
    return 0;
}
    