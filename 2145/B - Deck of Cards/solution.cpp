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
    int op[3] = {0};
    rep(i,1,k){
        char tmp;cin >>tmp;
        op[tmp - '0']++;
    }
    if(k >= n){
        rep(i,1,n){
            cout << '-';
        }
        cout << '
';
        return ;
    }
    int upmx = op[0] + op[2];
    int downmx = op[1] + op[2];
    rep(i,1,n){
        if(i <= op[0] || i >= n - op[1] + 1)cout << '-';
        else if(i > upmx && i < n - downmx + 1)cout << '+';
        else cout << '?';
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