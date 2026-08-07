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
int T,n;
string s;
 
void O_o(){
    cin >> s;
    n = s.size();
    s = '#' + s;
    V<int> a(n + 1);
    int sum = 0;
    rep(i,1,n)a[i] = s[i] - '0',sum += a[i];
    int cnt = 0;
    while(sum >= 10){
        int mx = -1,idx = -1;
        rep(i,1,n){
            int x = (i == 1 ? a[i] - 1 : a[i]);
            if(x > mx){
                mx = x;
                idx = i;
            }
        }
        if(idx != 1){
            sum -= mx;
            a[idx] = 0;
        }else{
            sum -= a[idx] - 1;
            a[idx] = 1;
        }
        cnt++;
    }
    cout << cnt << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> T;
    while(T--)O_o();
    return 0;
}