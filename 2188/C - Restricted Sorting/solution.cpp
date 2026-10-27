#include <bits/stdc++.h>
using namespace std;
#define int long long
const int inf = 0x3f3f3f3f3f3f3f;
 
void O_o(){
    int n;cin >> n;
    int mxn = -1;
    vector<int> a(n + 1);
    for(int i=1;i<=n;i++){
        cin >> a[i];
        mxn = max(mxn,a[i]);
    }
    auto b = a;
    sort(b.begin() + 1,b.begin() + 1 + n);
    if(a == b){
        cout << -1 << '
';
        return ;
    }
 
    int mx = -1,mn = inf;
    for(int i=1;i<=n;i++){
        mn = min(mn,a[i]);
        mx = max(mx,a[i]);
    }
 
    auto check = [&](int x) -> bool {
        for(int i=1;i<=n;i++){
            if(a[i] != b[i]){
                if(a[i] - mn < x && mx - a[i] < x){
                    return false;
                }
            }
        }
        return true;
    };
 
    int l = -1,r = mxn;
    while(l + 1 != r){
        int mid = l + r >> 1;
        if(check(mid)){
            l = mid;
        }else{
            r = mid;
        }
    }
    cout << l << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    int T;cin >> T;
    while(T--)O_o();
    return 0;
}