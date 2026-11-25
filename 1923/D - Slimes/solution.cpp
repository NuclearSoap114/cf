 
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i,l,r) for(int i=(l);i<=(r);i++)
#define rep_(i,l,r) for(int i=(l);i>=(r);i--)
#define all(i) i.begin() + 1,i.begin() + n + 1
#define pii pair<int,int>
#define V vector
#define F first
#define S second
#define pb push_back
#define is insert
const int inf = 1LL << 62,N = 3e5 + 10;
const double pi = acos(-1);
// --------------- AC ---------------
int T,n,a[N],pre[N],dif[N],ans[N];
 
void O_o(){
    cin >> n;
    pre[0] = dif[0] = 0;
 
    rep(i,1,n){
        cin >> a[i];
        pre[i] = pre[i - 1] + a[i];
        dif[i] = dif[i - 1];
        if(i > 1 && a[i] != a[i - 1])dif[i]++;
        ans[i] = inf;
    }
 
    rep(i,1,n){
        if(i > 1 && a[i - 1] > a[i])ans[i] = 1;
        if(i < n && a[i + 1] > a[i])ans[i] = 1;
 
        int l = 2,r = i - 1;
        while(l <= r){
            int mid = (l + r) >> 1;
            int L = i - mid;
            if(pre[i - 1] - pre[L - 1] > a[i] && dif[i - 1] - dif[L] > 0){
                ans[i] = min(ans[i],mid);
                r = mid - 1;
            }else{
                l = mid + 1;
            }
        }
 
        l = 2,r = n - i;
        while(l <= r){
            int mid = (l + r) >> 1;
            int R = i + mid;
            if(pre[R] - pre[i] > a[i] && dif[R] - dif[i + 1] > 0){
                ans[i] = min(ans[i],mid);
                r = mid - 1;
            }else{
                l = mid + 1;
            }
        }
    }
 
    rep(i,1,n){
        cout << (ans[i] == inf ? -1 : ans[i]) << ' ';
    }
    cout << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> T;
    while(T--)O_o();
    return 0;
}