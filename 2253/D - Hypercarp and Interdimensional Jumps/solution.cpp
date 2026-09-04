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
int T,n,x,y;
 
void O_o(){
    cin >> x >> y;
 
    string s;
 
    auto check = [&](int len) -> bool {
        int xx = x,yy = y;
        s = "";
        rep(i,1,len){
            int add = len + 1 - i;
            if(add > xx && add > yy){
                return false;
            }
            if(xx > yy){
                xx -= add;
                s += 'X';
            }else{
                yy -= add;
                s += 'Y';
            }
        }
        return true;
    };
 
    int l = -1,r = 20001;
    while(l + 1 != r){
        int mid = l + r >> 1;
        if(check(mid))l = mid;
        else r = mid;
    }
 
    check(l);
 
    cout << s << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> T;
    while(T--)O_o();
    return 0;
}