#include <bits/stdc++.h>
using namespace std;
#define int long long
#define go(i,a,b) for(int i=a;i<=b;i++)
#define og(i,a,b) for(int i=b;i>=a;i--)
#define all() a.begin() + 1,a.begin() + n + 1
int T,n,h,k,sum,ans;
 
void O_o(){
    sum = ans = 0;
    cin >> n >> h >> k;
    vector<int> a(n + 1),pre(n + 1,0),mn(n + 1,0x3f3f3f3f3f3f),mx(n + 2,-1);
    for(int i=1;i<=n;i++){
        cin >> a[i];
        sum += a[i];
        pre[i] = pre[i - 1] + a[i];
        mn[i] = min(mn[i - 1],a[i]);
    }
    if(h % sum == 0){
        cout << h / sum * n + (h / sum - 1) * k << '
';
        return ;
    }
    for(int i=n;i>=1;i--){
        mx[i] = max(mx[i + 1],a[i]);
    }
    vector<int> b(n + 1);
    for(int i=1;i<=n;i++){
        int tmp = pre[i];
        int exch = pre[i] - mn[i] + mx[i + 1];
        if(exch > tmp) tmp = exch;
        if(tmp >= h - h / sum * sum){
            ans += i;
            break;
        }
    }
    cout << ans + h / sum * (n + k) << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    cin >> T;
    while(T--)O_o();
}