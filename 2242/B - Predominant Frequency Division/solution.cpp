#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 2e5 + 10,inf = 1e18;
int T,n;
 
void O_o(){
    cin >> n;
    vector<int> a(n + 1),s1(n + 2,0),s2(n + 2,0),suf(n + 2,-99999999999);
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    if(n < 3){
        cout << "NO" << '
';
        return ;
    }
    for(int i=1;i<=n;i++){
        s1[i] = s1[i - 1] + (a[i] == 1 ? 1 : -1);
        s2[i] = s2[i - 1] + (a[i] == 3 ? -1 : 1);
    }
    for(int i=n-1;i>=1;i--){
        suf[i] = max(suf[i + 1],s2[i]);
    }
    for(int l=1;l<=n - 2;l++){
        if(s1[l] >= 0 && suf[l + 1] >= s2[l]){
            cout << "YES" << '
';
            return ;
        }
    }
    cout << "NO" << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> T;
    while(T--)O_o();
}