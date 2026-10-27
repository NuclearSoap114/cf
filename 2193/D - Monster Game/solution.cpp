#include <bits/stdc++.h>
using namespace std;
#define int long long
#define go(i,a,b) for(int i=a;i<=b;i++)
#define og(i,a,b) for(int i=b;i>=a;i--)
int T,n;
 
void O_o(){
    cin >> n;
    vector<int> a(n + 1),b(n + 1);
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    for(int i=1;i<=n;i++){
        cin >> b[i];
    }
    sort(a.begin() + 1,a.begin() + 1 + n);
    reverse(a.begin() + 1,a.begin() + n + 1);
    int p = 0,sum = 0,ans = 0;
    for(int i=1;i<=n;i++){
        while(p < n && sum + b[p + 1] <= i){
            p++;
            sum += b[p];
        }
        ans = max(ans,a[i] * p);
    }
    cout << ans << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    cin >> T;
    while(T--)O_o();
}