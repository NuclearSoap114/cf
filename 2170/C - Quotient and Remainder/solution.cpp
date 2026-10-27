#include <bits/stdc++.h>
using namespace std;
#define int long long
int T,n,k,ans;
vector<int> r,q;
void O_o(){
    ans = 0;
    cin >> n >> k;
    r.resize(n + 1);
    q.resize(n + 1);
    for(int i=1;i<=n;i++){
        cin >> q[i];
    }
    for(int i=1;i<=n;i++){
        cin >> r[i];
    }
    sort(r.begin() + 1,r.end());
    sort(q.begin() + 1,q.end());
    int L = 1,R = n;
    while(L <= n && R >= 1){
        if(q[L] * r[R] + q[L] + r[R] <= k){
            ans++;
            L++;
            R--;
        }else{
            R--;
        }
    }
    cout << ans << '
';
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    cin >> T;
    while(T--)O_o();
    return 0;
}