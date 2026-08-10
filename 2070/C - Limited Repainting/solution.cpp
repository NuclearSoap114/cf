#include <bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i,l,r) for(int i=(l);i<=(r);i++)
#define all() a.begin() + 1,a.begin() + n + 1
#define pii pair<int,int>
#define V vector
#define F first
#define S second
#define pb push_back
#define is insert
const int inf = 1LL << 62,N = 2e5 + 10;
const double pi = acos(-1);
// --------------- AC ---------------
int T,n,k;
 
void O_o(){
    cin >> n >> k;
    V<char> a(n + 1);
    V<int> c(n + 1);
    rep(i,1,n)cin >> a[i];
    set<int> st;
    st.is(0);
    rep(i,1,n){
        cin >> c[i];
        st.is(c[i]);
    }
    V<int> tmp;
    for(int x : st){
        tmp.pb(x);
    }
    int l = -1,r = tmp.size();
    int mid = l + r >> 1;
 
    auto check = [&](int num) -> bool {
        int cnt = 0;
        bool in = 0;
        rep(i,1,n){
            if(c[i] <= num)continue;
            if(a[i] == 'B'){
                if(!in){
                    cnt++;
                    in = 1;
                }
            }else{
                if(in)in = 0;
            }
        }
        return cnt <= k;
    };
 
    while(l + 1 != r){
        mid = l + r >> 1;
        int num = tmp[mid];
        if(check(num)) r = mid;
        else l = mid;
    }
    cout << tmp[r] << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> T;
    while(T--)O_o();
    return 0;
}