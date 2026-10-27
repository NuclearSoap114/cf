#include <bits/stdc++.h>
using namespace std;
 
#define int long long
 
const int mod = 998244353;
 
void solve(){
    int n;
    cin >> n;
 
    vector<int> a(n + 1,0);
 
    bool ok = true;
 
    for(int i = 1;i < n;i++){
        cin >> a[i];
 
        if(a[i] == n){
            ok = false;
        }
    }
 
    if(!ok){
        cout << 0 << '
';
        return;
    }
 
    vector<bool> pre(n + 1),suf(n + 1);
 
    pre[0] = true;
 
    for(int i = 1;i < n;i++){
        pre[i] = pre[i - 1] && a[i - 1] <= a[i];
    }
 
    suf[n] = true;
 
    for(int i = n - 1;i >= 1;i--){
        suf[i] = suf[i + 1] && a[i] >= a[i + 1];
    }
 
    auto calc = [&](int cut)->long long{
        int l = 1;
        int r = n - 1;
 
        int used = 0;
        int last = -1;
 
        long long ways = 1;
 
        while(l <= cut || r >= cut + 1){
            int w;
 
            if(l > cut){
                w = a[r];
                r--;
            }
            else if(r < cut + 1){
                w = a[l];
                l++;
            }
            else if(a[l] < a[r]){
                w = a[l];
                l++;
            }
            else if(a[r] < a[l]){
                w = a[r];
                r--;
            }
            else{
                return 0LL;
            }
 
            if(w != last){
                last = w;
            }
            else{
                int choices = w - used;
 
                if(choices <= 0){
                    return 0LL;
                }
 
                ways = ways * choices % mod;
            }
 
            used++;
        }
 
        return ways;
    };
 
    long long ans = 0;
 
    for(int cut = 0;cut < n;cut++){
        bool ok = pre[cut] && suf[cut + 1];
 
        if(cut >= 1 && cut + 1 <= n - 1){
            ok = ok && a[cut] != a[cut + 1];
        }
 
        if(ok){
            ans = (ans + calc(cut)) % mod;
        }
    }
 
    cout << ans << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int T;
    cin >> T;
 
    while(T--){
        solve();
    }
 
    return 0;
}