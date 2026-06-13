#include <bits/stdc++.h>
using namespace std;
#define int long long
int n,T;
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> T;
    while(T--){
            cin >> n;
        vector<int> a(n + 1);
        for(int i=1;i<=n;i++){
            cin >> a[i];
        }
        cout << *max_element(a.begin() + 1,a.begin() + n + 1) - *min_element(a.begin() + 1,a.begin() + n + 1) + 1 << '
';
    }
    return 0;
}