#include <bits/stdc++.h>
using namespace std;
#define int long long
int T;
 
void O_o(){
    int n,h,l;
    cin>>n>>h>>l;
    
    vector<int> a(n);
    for(int &x:a)cin>>x;
    
    int A=0,B=0,C=0;
    for(int x:a){
        if(x>=1&&x<=h&&x<=l) C++;
        else if(x>=1&&x<=h) A++;
        else if(x>=1&&x<=l) B++;
    }
    
    int ans=0;
    for(int k=0;k<=C;k++){
        ans=max(ans,min(A+k,B+C-k));
    }
    cout<<ans<<'
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
 
    cin>>T;
    while(T--)O_o();
    return 0;
}