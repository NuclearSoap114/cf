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
const int inf = 1LL << 62,N = 2e5 + 10,mod = 1e9 + 7;
const double pi = acos(-1);
// --------------- AC ---------------
int T,n,a,ab,abc,k = 1;
string s;
 
void O_o(){
    cin >> n >> s;
 
    for(char ch : s){
        if(ch == 'a'){
            a = (a + k) % mod;
        }
        if(ch == 'b'){
            ab = (a + ab) % mod;
        }
        if(ch == 'c'){
            abc = (ab + abc) % mod;
        }
        if(ch == '?'){
            abc = (abc * 3 % mod + ab) % mod;
            ab = (ab * 3 % mod + a) % mod;
            a = (a * 3 % mod + k) % mod;
            k = 3 * k % mod;
        }
    }
 
    cout << abc << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    T = 1;
    while(T--)O_o();
    return 0;
}