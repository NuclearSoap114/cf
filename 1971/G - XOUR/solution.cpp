#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MAXN = 2e5 + 5;
ll Tex, n, a[MAXN];
vector<ll> mp[MAXN];
queue<ll> op[MAXN];
void AC() {
    cin >> n;
    map<ll, ll> f;
    ll idx = 0;
    for (int i = 1; i <= n; i ++) {
        cin >> a[i];
        if (!f[a[i] >> 2]) f[a[i] >> 2] = ++ idx;
        mp[f[a[i] >> 2]].push_back(a[i]);
    }
    for (int i = 1; i <= idx; i ++) {
        sort(mp[i].begin(), mp[i].end());
        for (auto it : mp[i]) {
            op[i].push(it);
        }
        mp[i].clear();
    }
    for (int i = 1; i <= n; i ++) {
        cout << op[f[a[i] >> 2]].front() << " ";
        op[f[a[i] >> 2]].pop();
    }
    cout << "
";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> Tex;
    while(Tex --) AC();
    return 0;
}