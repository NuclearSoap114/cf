#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve() {
    int n;
    cin >> n;
    vector<int> odd, even;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x % 2 == 1) {
            odd.push_back(x);
        } else {
            even.push_back(x);
        }
    }
    sort(odd.rbegin(), odd.rend());
    sort(even.rbegin(), even.rend());
    int o = odd.size(), e = even.size();
    
    vector<int> pre_e(e + 1, 0);
    for (int i = 1; i <= e; i++) {
        pre_e[i] = pre_e[i - 1] + even[i - 1];
    }
    
    if (o == 0) {
        for (int k = 1; k <= n; k++) {
            cout << 0 << " ";
        }
        cout << '
';
        return;
    }
    
    int odd_count = 1;
    int even_count = 0;
    int max_odd = odd[0];
    
    for (int k = 1; k <= n; k++) {
        if (k == 1) {
            cout << max_odd << " ";
        } else {
            if (even_count < e) {
                even_count++;
            } else {
                if (odd_count + 2 <= o && even_count > 0) {
                    odd_count += 2;
                    even_count--;
                } else {
                    odd_count++;
                }
            }
            if (odd_count % 2 == 1) {
                cout << max_odd + pre_e[even_count] << " ";
            } else {
                cout << 0 << " ";
            }
        }
    }
    cout << '
';
}
 
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}