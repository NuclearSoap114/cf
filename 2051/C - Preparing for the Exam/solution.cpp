#include <iostream>
using namespace std;
 
const int MAXN = 3e5 + 10;
bool known[MAXN];
 
void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    
    for(int i = 1; i <= n; i++) {
        known[i] = false;
    }
    
    int a[MAXN];
    for(int i = 0; i < m; i++) {
        cin >> a[i];
    }
    
    for(int i = 0; i < k; i++) {
        int q;
        cin >> q;
        known[q] = true;
    }
 
    if(k < n-1) {
        for(int i = 0; i < m; i++) {
            cout << "0";
        }
        cout << "
";
        return;
    }
    
    if(k == n) {
        for(int i = 0; i < m; i++) {
            cout << "1";
        }
        cout << "
";
        return;
    }
    
    for(int i = 0; i < m; i++) {
        cout << (known[a[i]] ? "0" : "1");
    }
    cout << "
";
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}