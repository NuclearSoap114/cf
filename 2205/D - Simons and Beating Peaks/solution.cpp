#include <bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i,l,r) for(int i=(l);i<=(r);i++)
#define rep_(i,l,r) for(int i=(l);i>=(r);i--)
#define pii pair<int,int>
#define V vector
#define F first
#define S second
#define pb push_back
#define is insert
const int inf = 1LL << 62,N = 5e5 + 10;
const double pi = acos(-1);
// --------------- AC ---------------
int T,n,a[N],ls[N],rs[N],ans;
 
void dfs(int u,int dep){
    if(!u) return ;
    ans = max(ans,dep);
    dfs(ls[u],dep + 1);
    dfs(rs[u],dep + 1);
}
 
void O_o(){
    cin >> n;
 
    rep(i,1,n){
        cin >> a[i];
        ls[i] = rs[i] = 0;
    }
 
    stack<int> st;
 
    rep(i,1,n){
        int last = 0;
 
        while(!st.empty() && a[st.top()] < a[i]){
            last = st.top();
            st.pop();
        }
 
        if(!st.empty()){
            rs[st.top()] = i;
        }
 
        if(last){
            ls[i] = last;
        }
 
        st.push(i);
    }
 
    while(st.size() > 1) st.pop();
    int root = st.top();
 
    ans = 0;
    dfs(root,1);
 
    cout << n - ans << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    cin >> T;
    while(T--) O_o();
 
    return 0;
}