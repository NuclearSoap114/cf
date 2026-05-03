#include <iostream>
#include <vector>
#include <numeric>
 
using namespace std;
 
/**
 * Helper to perform the query and return the count of unique values.
 * k: number of indices in the prefix 1..k
 * extra: additional specific indices to include (like y or z)
 */
int ask(int k, const vector<int>& extra = {}) {
    int total_k = k + extra.size();
    if (total_k == 0) return 0;
 
    cout << "? " << total_k;
    for (int i = 1; i <= k; ++i) cout << " " << i;
    for (int idx : extra) cout << " " << idx;
    cout << endl;
 
    int res;
    cin >> res;
    if (res == -1) exit(0); // Safety exit if we exceed limits
    return res;
}
 
void solve() {
    int n;
    cin >> n;
 
    // 1. Find z (the 3rd occurrence)
    // The parity of the unique count matches the parity of indices 
    // until the 3rd occurrence of the triple-value appears.
    int z = 2 * n + 1;
    int low = 1, high = 2 * n;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (ask(mid) % 2 != mid % 2) {
            z = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
 
    // 2. Find y (the 2nd occurrence)
    // We search the range [1, z-1]. By including index z in every query,
    // the parity logic shifts: a match occurs once v is included twice.
    int y = z - 1;
    low = 1, high = z - 2;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (ask(mid, {z}) % 2 == mid % 2) {
            y = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
 
    // 3. Find x (the 1st occurrence)
    // We search the range [1, y-1]. By including indices y and z,
    // a parity mismatch occurs as soon as the 1st occurrence of v is included.
    int x = y - 1;
    low = 1, high = y - 2;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (ask(mid, {y, z}) % 2 != mid % 2) {
            x = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
 
    cout << "! " << x << " " << y << " " << z << endl;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        solve();
    }
    return 0;
}