#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void O_o(){
    int n,l,r;cin >> n >> l >> r;
    vector<int> a(n + 1);
    for(int i=0;i<=n;i++){
        a[i] = i;
    }
    a[l - 1] = a[r];
    for(int i=1;i<=n;i++){
        int x = a[i - 1] ^ a[i];
        cout << x << ' ';
    }
    cout << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    int T;cin >> T;
    while(T--)O_o();
    return 0;
}