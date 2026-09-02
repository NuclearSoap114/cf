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
 
void O_o(){
    int n;
    string a,b;
    cin >> n >> a >> b;
    int odd_a = 0,even_a = 0;
    int odd_b = 0,even_b = 0;
    for(int i=0;i<n;i++){
        if(a[i] == '1'){
            if(i % 2 == 0) even_a++;
            else odd_a++;
        }
        if(b[i] == '1'){
            if(i % 2 == 0) even_b++;
            else odd_b++;
        }
    }
    if(odd_a == odd_b && even_a == even_b) cout << "YES" << '
';
    else cout << "NO" << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> T;
    while(T--)O_o();
    return 0;
}