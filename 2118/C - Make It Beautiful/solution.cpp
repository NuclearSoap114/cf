#include <bits/stdc++.h>
using namespace std;
#define int long long
int a[1008611];
int num[64];
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int r,r1,r2;
 
    int t;cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        for (int r=1;r<=n;r++) cin>>a[r];
        int ans=0;
        for (r=1;r<=n;r++)
        {
            for (r1=0;r1<=63;r1++)
            {
                if (((1ULL<<r1)&a[r])==0) num[r1]++;
                else ans++;
            }
        }
        for (r=0;r<=63;r++)
        {
            while(num[r]&&(k>=(1ULL<<r)))
                num[r]--,k-=(1ULL<<r),ans++;
            num[r]=0;
        }
        cout<<ans<<'
';
    }
}