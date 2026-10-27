#include <bits/stdc++.h>
using namespace std;
#define int long long
#define go(i,a,b) for(int i=a;i<=b;i++)
#define og(i,a,b) for(int i=b;i>=a;i--)
int T,n;
 
void O_o(){
    cin >> n;
    int ans = 0;
    vector<int> a(n + 1),b(n + 1,0);
    for(int i=1;i<=n;i++){
        cin >> a[i];
        b[i] = max(a[i],b[i - 1]);
    }
    for(int i=2;i<=n;i+=2){
        a[i] = b[i];
        if(a[i] <= a[i - 1]){
            ans += a[i - 1] - a[i] + 1;
        }
        if(i + 1 > n)continue;
        if(a[i] <= a[i + 1]){
            ans += a[i + 1] - a[i] + 1;
            a[i + 1] -= a[i + 1] - a[i] + 1;
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
}