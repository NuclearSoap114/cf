#include <bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i,l,r) for(int i=(l);i<=(r);i++)
const int inf = 1e18,N = 2e5 + 10;
int T,n;
 
struct node{
    int l,r;
    int ll,rr;
};
 
void O_o(){
    cin >> n;
    vector<node> a(n + 1);
    rep(i,1,n){
        cin >> a[i].l >> a[i].r >> a[i].ll >> a[i].rr;
    }
    
    int ans = 0;
 
    auto check = [&](int m) -> bool {
        int cnt = 0;
        rep(i,1,n){
            int l = cnt + 1;
            int r = m - cnt;
            if(l >= a[i].l && l <= a[i].r)continue;
            if(r >= a[i].ll && r <= a[i].rr)continue;
            cnt++;
            if(cnt == m)return true;
        }
 
        return false;
    };
 
    for(int i=n;i>=1;i--){
        if(check(i)){
            cout << i << '
';
            return ;
        }
    }
    cout << 0 << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> T;
    while(T--)O_o();
    return 0;
}