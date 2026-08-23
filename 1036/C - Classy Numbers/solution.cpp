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
const int inf = 1LL << 62,N = 2e5 + 10;
const double pi = acos(-1);
// --------------- AC ---------------
int T,n,l,r;
set<int> st;
V<int> a;
 
void dfs(int pos,int num,int cnt){
    if(cnt > 3 || pos > 19)return ;
    if(num) st.is(num);
    dfs(pos + 1,num * 10,cnt);
    if(cnt == 3)return ;
    rep(i,1,9){
        dfs(pos + 1,num * 10 + i,cnt + 1);
    }
}
 
void O_o(){
    cin>>l>>r;
    cout<<upper_bound(a.begin(),a.end(),r) - lower_bound(a.begin(),a.end(),l) << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    dfs(0,0,0);
    for(int x : st)a.pb(x);
    cin >> T;
    while(T--)O_o();
    return 0;
}