#include <bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i,l,r) for(int i=(l);i<=(r);i++)
#define rep_(i,l,r) for(int i=(l);i>=(r);i--)
#define all(i) i.begin(),i.end()
#define pii pair<int,int>
#define V vector
#define F first
#define S second
#define pb push_back
#define is insert
const int inf = 1LL << 62,N = 2e5 + 10;
const double pi = acos(-1);
// --------------- AC ---------------
int T,n;
 
void O_o(){
    cin >> n;
    
    string op;cin >> op;
 
    op = '#' + op;
    stack<int> st;
    V<bool> vis(n + 1,0);
 
    rep(i,1,n){
        if(op[i] == '1'){
            st.push(i);
        }else if(op[i] == '2'){
            if(!st.empty()){
                vis[st.top()] = 1;
                st.pop();
            }else{
                vis[i] = 1;
            }
        }else{
            vis[i] = 1;
        }
    }
 
    V<int> ans;
    rep(i,1,n){
        if(!vis[i]){
            ans.pb(i);
        }
    }
 
    cout << ans.size() << '
';
 
    sort(all(ans));
 
    for(int x : ans){
        cout << x << ' ';
    }
 
    cout << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> T;
    while(T--)O_o();
    return 0;
}