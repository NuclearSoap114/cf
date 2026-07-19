#include <bits/stdc++.h>
using namespace std;
#define int long long
int T,n;
void O_o(){
    cin >> n;
    vector<int> a(n + 1);
    set<int> b;
    for(int i=1;i<=n;i++)cin >> a[i];
    for(int i=1;i<=n;i++){
        int x;cin >> x;
        b.insert(x);
    }
    for(int i=1;i<=n;i++){
        auto it = b.lower_bound(a[i]);
        if(it == b.end()){
            cout << -1 << '
';
            return ;
        }
        int x = *it;
        a[i] = x;
        b.erase(it);
    }
    int ans = 0;
    for(int i=1;i<=n;i++){
        for(int j=i + 1;j<=n;j++){
            if(a[i] > a[j])ans++;
        }
    }
    cout << ans << '
';
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> T;
    while(T--)O_o();
    return 0;
}