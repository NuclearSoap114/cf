#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAXN = 2e5 + 10;
int T,n,a[MAXN],b[MAXN],mx2[MAXN],mx1[MAXN],mn1[MAXN],mn2[MAXN];
void O_o(){
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> a[i];
        mn1[1] = a[1];
        mx1[i] = max(mx1[i-1],a[i]);
        mn1[i] = min(mn1[i-1],a[i]);
    }
    for(int i=1;i<=n;i++){
        cin >> b[i];
    }
    mx2[n] = b[n]; 
    mn2[n] = b[n];
    for(int i=n-1;i>=1;i--){
        mx2[i] = max(mx2[i+1],b[i]);
        mn2[i] = min(mn2[i+1],b[i]);
    }
    ll ans = 0;
    map<int,int> mp;
    for(int i=1;i<=n;i++){
        int l = min(mn1[i],mn2[i]);
        int r = max(mx1[i],mx2[i]);
        mp[r] = max(mp[r],l);
    }
    int l = 0;
    for(int i=1;i<=2 * n;i++){
        l = max(l,mp[i]);
        ans += l;
    }
    cout << ans << '
';
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    cin >> T;
    while(T--)O_o();
    return 0;
}
/*
 
*/