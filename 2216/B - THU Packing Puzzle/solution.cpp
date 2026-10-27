#include <bits/stdc++.h>
using namespace std;
#define int long long
inline void fmx(int &a,int b){ if(a<b) a=b;}
#define go(i,a,b) for(int i=a;i<=b;i++)
#define og(i,a,b) for(int i=b;i>=a;i--)
#define all() a.begin() + 1,a.begin() + n + 1
int T,n;
 
int calc(int t,int h){
    int ans=0;
    int x=min(h,t/2);
    ans+=x*7;
    t-=x*2;
    h-=x;
    if(t&&h){
        ans+=5;
        t--;
        h--;
    }
    ans+=h*3;
    if(t) ans+=t*2+1;
    return ans;
}
 
void O_o(){
    int t,h,u;
    cin>>t>>h>>u;
    int ans=0;
    int x=min(t,u);
    ans+=x*4;
    t-=x;
    u-=x;
    ans+=u*3;
    ans+=calc(t,h);
    cout<<ans<<"
";
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    cin >> T;
    while(T--)O_o();
}