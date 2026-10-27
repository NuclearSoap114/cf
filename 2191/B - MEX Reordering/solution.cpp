#include <bits/stdc++.h>
using namespace std;
 
bool check(const vector<int>& a) {
    int n = a.size();
    vector<int> pre(n + 1, 0);
    vector<int> suf(n + 1, 0);
 
    vector<bool> vis(n + 2);
    int mex = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] <= n + 1) vis[a[i]] = true;
        while (vis[mex]) ++mex;
        pre[i + 1] = mex;
    }
 
    fill(vis.begin(), vis.end(), false);
    mex = 0;
    for (int i = n - 1; i >= 0; --i) {
        if (a[i] <= n + 1) vis[a[i]] = true;
        while (vis[mex]) ++mex;
        suf[i] = mex;
    }
 
    for (int i = 1; i < n; ++i) {
        if (pre[i] == suf[i]) return false;
    }
    return true;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int &x : a) cin >> x;
 
        vector<int> b = a;
        sort(b.begin(), b.end());
 
        bool yes = check(b);
        if (!yes) {
            reverse(b.begin(), b.end());
            yes = check(b);
        }
 
        const int TIMES = 200;
        mt19937 rng(random_device{}());
        for (int i = 0; i < TIMES && !yes; ++i) {
            shuffle(a.begin(), a.end(), rng);
            yes = check(a);
        }
 
        cout << (yes ? "YES
" : "NO
");
    }
}