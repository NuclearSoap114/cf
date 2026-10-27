#include <bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i,l,r) for(int i=(l);i<=(r);i++)
#define rep_(i,l,r) for(int i=(l);i>=(r);i--)
#define pii pair<int,int>
#define V vector
#define F first
#define S second
#define pb push_back
#define is insert
const int inf = 1LL << 62,N = 2e5 + 10;
const double pi = acos(-1);
// --------------- AC ---------------
int T,n;
 
void O_o(){
    cin >> n;
    V<V<int>> a(n + 1);
    V<int> mex(n + 1),mex2(n + 1);
    map<int,int> cnt;
    int len = 0,sum = 0;
 
    rep(i,1,n){
        int m;
        cin >> m;
        len += m;
        a[i].resize(m);
        for(auto &x : a[i]){
            cin >> x;
            cnt[x]++; // 统计每个值在所有数组中的总出现次数
        }
        sort(a[i].begin(),a[i].end());
    }
 
    // 预处理每个数组的 mex 和填上 mex 后的新 mex
    rep(i,1,n){
        int m = 0;
        for(int x : a[i]){
            if(x > m) break;
            if(x == m) m++;
        }
        mex[i] = m;
 
        int m2 = m + 1;
        for(int x : a[i]){
            if(x > m2) break;
            if(x == m2) m2++;
        }
        mex2[i] = m2;
        sum += mex[i];
    }
 
    // 每种操作都先贡献一次原始 mex 总和
    int ans = sum * len * (n - 1);
 
    // 统计元素从原数组删除后造成的 mex 变化
    rep(i,1,n){
        int m = a[i].size();
        rep(j,0,m - 1){
            int x = a[i][j];
            bool alone = (j == 0 || a[i][j - 1] != x)
                      && (j == m - 1 || a[i][j + 1] != x);
            // 只有 x < mex 且 x 在当前数组中唯一，删除后 mex 才会变成 x
            if(alone && x < mex[i]){
                ans += (x - mex[i]) * (n - 1);
            }
        }
    }
 
    // 只有加入当前 mex 才会改变目标数组的 mex
    rep(i,1,n){
        ans += cnt[mex[i]] * (mex2[i] - mex[i]);
    }
 
    cout << ans << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    cin >> T;
    while(T--) O_o();
 
    return 0;
}