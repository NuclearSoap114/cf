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
int T,n,x,k,now,cnt;
 
void O_o(){
    cin >> n >> x >> k;
    now = x;
    cnt = 0;
    V<int> pre(n + 1,0);
    int to0 = -1;
    rep(i,1,n){
        char tmp;cin >> tmp;
        pre[i] = pre[i - 1] + (tmp == 'L' ? -1 : 1);
    }
    int pos = -1;
    rep(i,1,n){
        if(x + pre[i] == 0){
            pos = i;
            break;
        }
    }
    if(pos == -1 || pos > k){
        cout << 0 << '
';
        return ;
    }
    rep(i,1,n){
        if(pre[i] == 0){
            to0 = i;
            break;
        }
    }
    if(to0 == -1){
        cout << 1 << '
';
        return ;
    }
    cout << (k - pos) / to0 + 1 << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> T;
    while(T--)O_o();
    return 0;
}