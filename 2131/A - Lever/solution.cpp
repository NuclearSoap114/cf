#include <iostream>
#include <vector>
using namespace std;
#define int long long
 
void deal() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > b[i]) {
            sum += a[i] - b[i];
        }
    }
    cout << sum + 1 << '
';
}
 
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        deal();
    }
    return 0;
}