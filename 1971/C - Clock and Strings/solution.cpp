#include<bits/stdc++.h>
#define endl '
'
#define int long long
using namespace std;
int n,a,b,c,d;
int f[20];
signed main(){
    int T;
    cin>>T;
    while(T--)
    {
        cin>>a>>b>>c>>d;
        f[a]=f[b]=3;
        int l=min(c,d),r=max(c,d),fl=0;
        for(int i=l;i<=r;i++){
            if(f[i]==3) fl++;
        }
        if(fl==2||fl==0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
        f[a]=f[b]=0;
    }
    return 0;
}