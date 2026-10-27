#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long
const int MAXN = 2e5 + 10;
 
int T;
struct nums {
    ll val;
    int where;
};
 
bool cmp(nums a, nums b) {
    return a.val < b.val;
}
 
void solve() {
    ll sum = 0;
    int n;
    ll x, y;
    cin >> n >> x >> y;
    nums a[MAXN];
    
    for(int i = 1; i <= n; i++) {
        cin >> a[i].val;
        sum += a[i].val;
        a[i].where = i;
    }
    
    sort(a + 1, a + n + 1, cmp);
    
    ll ans = 0;
    for(int i = 1; i <= n; i++) {
        ll target = sum - a[i].val;
        ll left = target - y;
        ll right = target - x;
        
        nums tmp = {left, 0};
        int start = lower_bound(a + i + 1, a + n + 1, tmp, cmp) - a;
        
        tmp.val = right;
        int end = upper_bound(a + i + 1, a + n + 1, tmp, cmp) - a - 1;
        
        if(start <= end) {
            ans += end - start + 1;
        }
    }
    
    cout << ans << "
";
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    cin >> T;
    while(T--) {
        solve();
    }
    return 0;
}