#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAXN = 2e5 + 10;
int T,n,a[MAXN];
string s;
void O_o(){
    cin >> n;
    int mx = 1,mn = 1;
    for(int i=1;i<=n;i++){
        cin >> a[i];
        if(a[i] > a[mx]){
            mx = i;
        }
        if(a[i] < a[mn]){
            mn = i;
        }
    }
    cin >> s;
    if(s[0] == '1' || s.back() == '1'){
        cout << -1 << '
';
        return ;
    }
    if(s[mx - 1] == '1' || s[mn - 1] == '1'){
        cout << -1 << '
';
        return ;
    }
    cout << 5 << '
';
    cout << 1 << ' ' << mx << '
';
    cout << 1 << ' ' << mn << '
';
    cout << mx << ' ' << n << '
';
    cout << mn << ' ' << n << '
';
    cout << min(mx,mn) << ' ' << max(mn,mx) << '
';
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    cin >> T;
    while(T--)O_o();
    return 0;
}