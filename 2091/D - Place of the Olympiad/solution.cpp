#include <iostream>
using namespace std;
#define int long long
 
void deal() {
    int n, m, k;
    cin >> n >> m >> k;
 
    if (k == 0) {
        cout << 0 << '
';
        return;
    }
 
    int x = k / n;
    int left = k - x * n; 
    int maxn = x + (left > 0 ? 1 : 0); 
 
    if (maxn > m) {
        cout << maxn << '
';
        return;
    }
 
    int blank = m - maxn;
    if (blank == m) {
        cout << 0 << '
';
        return;
    }
 
 
    int div = blank + 1;
    if (div <= 0) {
        cout << maxn << '
';
        return;
    }
 
    int ans = (maxn + div - 1) / div; 
    cout << ans << '
';
}
 
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    int t;
    cin >> t;
    while (t--) deal();
    return 0;
}