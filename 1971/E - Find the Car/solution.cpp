#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MAXN = 2e5 + 5;
ll Tex, n, k, q, a[MAXN], b[MAXN];
ll rd(ll a, ll b) {
    ll ret = a / b;
    ret += ((a % b) >= ((b + 1) / 2));
    return ret;
}
void AC() {
    cin >> n >> k >> q;
    for (int i = 1; i <= k; i ++) {
        cin >> a[i];
    }
    for (int i = 1; i <= k; i ++) {
        cin >> b[i];
    }
    while (q --) {
        ll d;
        cin >> d;
        ll idx = lower_bound(a, a + k + 1, d) - a;
        if (a[idx] == d) cout << b[idx] << " ";
        else {
            // cout << " *** " << (b[idx] - b[idx - 1]) << " " << (d - a[idx - 1]) << " " << a[idx] - a[idx - 1] << " *** 
";
            ll tm = b[idx - 1] + ((d - a[idx - 1]) * (b[idx] - b[idx - 1])) / (a[idx] - a[idx - 1]);
            cout << tm << " ";
        }
    }
    cout << "
";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> Tex;
    while (Tex --) AC();
    return 0;
}