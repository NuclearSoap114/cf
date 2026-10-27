#include <bits/stdc++.h>
using namespace std;
#define int long long
int T,n,ans;
 
void O_o(){
    ans = 0;
    cin >> n;
    vector<int> a(n + 1);
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    if(n == 1){
        cout << a[1] + (a[1] == 0 ? 1 : 0) << '
';
        return ;
    }
    sort(a.begin() + 1,a.begin() + 1 + n,[&](int x,int y) -> bool {
        return x > y;
    });
    sort(a.begin() + 2,a.begin() + n + 1);
    // for(int i=1;i<=n;i++){
    //     cout << a[i] << ' ';
    // }
    // cout << '
';
    ans += n * a[1];
    // cout << ans << '
';
    int mex = 0;
    bool f = 1;
    int cnt = 0;
    for(int i=1;i<=n;i++){
        if(i >= 2 && a[i] == a[i - 1]){
            cnt++;
            continue;
        }
        if(a[i] == mex){
            mex++;
            if(mex == a[1] && f){
                mex++;
                f = 0;
            }
        }
        ans += mex;
    }
    cout << ans + mex * cnt << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    cin >> T;
    while(T--)O_o();
    return 0;
}