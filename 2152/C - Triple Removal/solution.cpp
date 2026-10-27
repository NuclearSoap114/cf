#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void O_o(){
    int n,q;cin >> n >> q;
    vector<int>a(n + 1);
    for(int i = 1;i <= n;i++) cin >> a[i];
    vector<int>pre0(n + 1,0),pre1(n + 1,0),preSame(n + 1,0);
    for(int i = 1;i <= n;i++){
        pre0[i] = pre0[i - 1] + (a[i] == 0);
        pre1[i] = pre1[i - 1] + (a[i] == 1);
        preSame[i] = preSame[i - 1] + (i < n && a[i] == a[i + 1]);
    }
    while(q--){
        int l,r;cin >> l >> r;
        int cnt0 = pre0[r] - pre0[l - 1];
        int cnt1 = pre1[r] - pre1[l - 1];
        if(cnt0 % 3 != 0 || cnt1 % 3 != 0){
            cout << -1 << "
";
            continue;
        }
        int base = cnt0 / 3 + cnt1 / 3;
        int sameAdj = preSame[r - 1] - preSame[l - 1];
        int extra = sameAdj == 0 ? 1 : 0;
        cout << base + extra << "
";
    }
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
 
    int T;cin >> T;
    while(T--)O_o();
    return 0;
}