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
    V<int> pos_a[2],pos_b[2];
    for(int i=0;i < n;i++){
        if(a[i] == '1') pos_a[i % 2].push_back(i);
        if(b[i] == '1') pos_b[i % 2].push_back(i);
    }
    if(pos_a[0].size() != pos_b[0].size() || pos_a[1].size() != pos_b[1].size()){
        cout << "-1" << '
';
        return;
    }
    int ans = 0;
    for(int p=0;p < 2;p++){
        for(int i=0;i < pos_a[p].size();i++){
            ans += abs(pos_a[p][i] - pos_b[p][i]) / 2;
        }
    }
    cout << ans << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> T;
    while(T--)O_o();
    return 0;
}