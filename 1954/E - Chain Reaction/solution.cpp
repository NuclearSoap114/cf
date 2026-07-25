#include <bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i,l,r) for(int i=(l);i<=(r);i++)
const int inf = 1e18,N = 1e5 + 10;
int n,mx = -1;
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    vector<int> a(n + 1),c(n + 1);
    rep(i,1,n)cin >> a[i],mx = max(mx,a[i]);
    rep(i,1,n){
        if(i == 1 || a[i - 1] < a[i])c[i]++;
        if(i < n && a[i + 1] > a[i])c[i]--;
    }
    vector<int> d(mx + 2,0);
    rep(i,1,n){
        int x = a[i];
        int l = 1;
        while(l <= mx){
            int q = (x + l - 1) / l;
            int r;
            if(q == 1){
                r = mx;
            }else{
                r = min(mx,(x - 1) / (q - 1));
            }
            d[l] += c[i] * q;
            d[r + 1] -= c[i] * q;
            l = r + 1;
        }
    }
 
    // vector<int> ans(mx + 1,0);
 
    // rep(i,1,n){
    //     int x = a[i];
    //     int l = 1;
 
    //     while(l <= mx){
    //         // 当前区间内 ceil(x/k) 的值
    //         int q = (x + l - 1) / l;
 
    //         // 求当前区间右端点
    //         int r;
 
    //         if(q == 1){
    //             r = mx;
    //         }
    //         else{
    //             r = min(mx,(x - 1) / (q - 1));
    //         }
 
    //         // 对区间 [l,r] 中的每个 k 加上当前 a[i] 的贡献
    //         for(int k=l;k<=r;k++){
    //             ans[k] += c[i] * q;
    //         }
 
    //         // 跳到下一个分块
    //         l = r + 1;
    //     }
    // }
    // rep(i,1,mx){
    //     cout << ans[i] << ' ';
    // }
    // cout << '
';
 
    rep(k,1,mx){
        d[k] += d[k - 1];
        cout << d[k] << ' ';
    }
    cout << '
';
    
    return 0;
}