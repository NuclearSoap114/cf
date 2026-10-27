#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void O_o(){
    int n,m;cin>>n>>m;
    vector<int> a(n),b(n);
    for(int i=0;i<n;i++)cin>>a[i]>>b[i];
    
    int res=0;
    int pt=0, pp=0;
    int t=a[0]-pt;
    int d=abs(b[0]-pp);
    res += t - ((t - d)%2);
    
    for(int i=1;i<n;i++){
        t=a[i]-a[i-1];
        d=abs(b[i]-b[i-1]);
        res += t - ((t - d)%2);
    }
    
    t=m-a[n-1];
    res += t;
    
    cout<<res<<'
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    int T;cin>>T;
    while(T--)O_o();
    return 0;
}