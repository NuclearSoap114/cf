#include <bits/stdc++.h>
using namespace std;
#define int long long
#define go(i,a,b) for(int i=a;i<=b;i++)
#define og(i,a,b) for(int i=b;i>=a;i--)
int T,n,q;
 
void O_o(){
    cin >> n >> q;
    vector<int> a(n + 1);
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    vector<int> b(n + 1);
    for(int i=1;i<=n;i++){
        cin >> b[i];
    }
    for(int i=1;i<=n;i++){
        a[i] = max(a[i],b[i]);
    }
    int mx = a[n];
    for(int i=n-1;i>=1;i--){
        mx = max(mx,a[i]);
        a[i] = mx;
    }
    vector<int> pre(n + 1);
    pre[1] = a[1];
    for(int i=2;i<=n;i++){
        pre[i] = pre[i - 1] + a[i];
    }
    while(q--){
        int l,r;cin >> l >> r;
        cout << pre[r] - pre[l - 1] << ' ';
    }
    cout << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    cin >> T;
    while(T--)O_o();
}