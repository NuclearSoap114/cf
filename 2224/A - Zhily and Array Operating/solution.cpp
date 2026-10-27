#include<bits/stdc++.h>
#define int long long
#define endl '
'
using namespace std;
const int maxn=2e5+10;
int n,a[maxn],ans;
signed main(){
    int T;
    cin>>T;
    while(T--){
        cin>>n;
        ans=0;
        int sum=0;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        for(int i=n;i>=1;i--){
            if(sum<1) sum=0;
            sum+=a[i];
            if(sum>0) ans++;
        }
        cout<<ans<<endl;
    }
}