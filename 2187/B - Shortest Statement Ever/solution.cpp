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
const int inf = 1LL << 62,N = 2e5 + 10;
const double pi = acos(-1);
// --------------- AC ---------------
int T,x,y;
 
void O_o(){
    cin >> x >> y;
 
    auto work = [&](int mask,int v) -> pii {
        int mn = inf,res = 0;
 
        auto upd = [&](int z){
            if(z < 0 || (z & mask)) return ;
 
            int d = abs(z - v);
            if(d < mn){
                mn = d;
                res = z;
            }
        };
        upd(v);
 
        rep(i,0,30){
            int low = (1LL << i) - 1;
            int high = v & ~((1LL << (i + 1)) - 1);
 
            if((v >> i) & 1){
                int z = high | (low & ~mask);
                upd(z);
            }else{
                int z = high | (1LL << i);
                upd(z);
            }
        }
 
        return {mn,res};
    };
    pii a = work(x,y);
    pii b = work(y,x);
    if(a.F <= b.F){
        cout << x << ' ' << a.S << '
';
    }else{
        cout << b.S << ' ' << y << '
';
    }
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> T;
    while(T--) O_o();
    return 0;
}