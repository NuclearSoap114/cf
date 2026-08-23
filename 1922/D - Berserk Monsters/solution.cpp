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
const int inf = 1LL << 62,N = 3e5 + 10;
const double pi = acos(-1);
// --------------- AC ---------------
int T,n,a[N],b[N];
 
void O_o(){
    cin >> n;
    a[0] = a[n + 1] = 0;
    rep(i,1,n)cin >> a[i];
    rep(i,1,n)cin >> b[i];
 
    set<int> cur,alive;
    alive.is(0);
    alive.is(n + 1);
    rep(i,1,n){
        alive.is(i);
        cur.is(i);
    }
    rep(i,1,n){
        set<int> nxt,die;
        for(int x : cur){
            if(x <= 0 || x >= n + 1)continue;
            auto it = alive.find(x);
            if(it == alive.end())continue;
            int l = *prev(it);
            int r = *next(it);
            if(a[l] + a[r] > b[x]){
                die.is(x);
                nxt.is(l);
                nxt.is(r);
            }
        }
        for(int x : die){
            alive.erase(x);
        }
        cout << die.size() << ' ';
        cur = nxt;
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