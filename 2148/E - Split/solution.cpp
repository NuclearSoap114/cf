#include <bits/stdc++.h>
using namespace std;
 
void O_o() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<int> freq(n + 1, 0);
    for (int x : a) {
        freq[x]++;
    }
    vector<int> mx(n + 1, 0);
    bool can = true;
    for (int i = 1; i <= n; i++) {
        if (freq[i] > 0) {
            if (freq[i] % k != 0) {
                can = false;
                break;
            }
            mx[i] = freq[i] / k;
        }
    }
    if (!can) {
        cout << 0 << '
';
        return;
    }
    long long ans = 0;
    vector<int> cur(n + 1, 0);
    int left = 0;
    for (int right = 0; right < n; right++) {
        cur[a[right]]++;
        while (cur[a[right]] > mx[a[right]] && left <= right) {
            cur[a[left]]--;
            left++;
        }
        ans += (right - left + 1LL);
    }
    cout << ans << '
';
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int T;
    cin >> T;
    while (T--) O_o();
    return 0;
}