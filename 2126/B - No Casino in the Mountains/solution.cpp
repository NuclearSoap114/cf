#include <iostream>
#include <vector>
using namespace std;
 
void deal() {
    int n, k;
    cin >> n >> k;
    int ans = 0;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int cnt = 0;
    for (int i = 0; i <= n; i++) {
        if (i < n && a[i] == 0) {
            cnt++;
        } else {
            if (cnt >= k) {
                ans += (cnt - k) / (k + 1) + 1;
            }
            cnt = 0;
        }
    }
    cout << ans << '
';
}
 
int main() {
    int T;
    cin >> T;
    while (T--) deal();
    return 0;
}