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
    cin >> n;
    V<int> b(n);
    int sum = 0;
    rep(i,0,n - 1){
        cin >> b[i];
        sum += b[i];
    }
    if(sum <= 0){
        cout << -1 << '
';
        return;
    }
    multiset<int> s;
    for(int x : b){
        s.insert(x);
    }
    V<int> a;
    int cur = 0;
    while(!s.empty()){
        auto it = s.lower_bound(1 - cur);
        if(it == s.end()){
            cout << -1 << '
';
            return;
        }
        cur += *it;
        a.push_back(cur);
 
        s.erase(it);
    }
    for(int x : a){
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