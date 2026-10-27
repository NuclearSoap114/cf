#include <bits/stdc++.h>
using namespace std;
#define int long long 
 
void O_o(){
    int n,m;
    cin>>n>>m;
    vector<int>a(m);
    for(int i=0;i<m;i++)cin>>a[i];
    vector<int>lns;
    int idx=0;
    while(idx<m){
        int st=idx;
        int cur=a[idx];
        idx++;
        while(idx<m&&a[idx]==cur+1){
            cur++;
            idx++;
        }
        lns.push_back(idx-st);
    }
    int p=lns.size();
    if(p==1){
        int mx=a.back();
        int ans=n-mx+1;
        if(ans<0)ans=0;
        cout<<ans<<'
';
    }else{
        int len=lns[0];
        int r=a[len-1];
        bool ok=1;
        int pos=len;
        for(int i=1;i<p;i++){
            if(a[pos]!=1)ok=0;
            pos+=lns[i];
        }
        for(int si=1;si<p-1;si++){
            int rs=r+si;
            int sd=lns[si];
            if(rs!=sd)ok=0;
        }
        int lst=r+p-1;
        if(lst>n)ok=0;
        if(lst<lns.back())ok=0;
        cout<<(ok?1:0)<<'
';
    }
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
 
    int T;cin >> T;
    while(T--)O_o();
    return 0;
}