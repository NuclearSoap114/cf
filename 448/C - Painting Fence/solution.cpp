#include <bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i,l,r) for(int i=(l);i<=(r);i++)
#define rep_(i,l,r) for(int i=(l);i>=(r);i--)
#define all(i) i.begin() + 1,i.begin() + n + 1
#define pii pair<int,int>
#define V vector
#define F first
#define S second
#define pb push_back
#define is insert
 
const int inf = 1LL << 62,N = 5e3 + 10;
const double pi = acos(-1);
// --------------- AC ---------------
int T,n,a[N];
 
int dfs(int l,int r,int base){
    if(l > r)return 0;
 
    int mn=inf;
    rep(i,l,r)mn=min(mn,a[i]);
 
    int ans=r-l+1;
 
    int res=mn-base;
 
    int lst=l;
    rep(i,l,r){
        if(a[i]==mn){
            if(lst<=i-1)res+=dfs(lst,i-1,mn);
            lst=i+1;
        }
    }
    if(lst<=r)res+=dfs(lst,r,mn);
 
    return min(ans,res);
}
//
void O_o(){
    cin >> n;
    rep(i,1,n)cin >> a[i];
    cout << dfs(1,n,0) << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    T=1;
    while(T--)O_o();
    return 0;
}