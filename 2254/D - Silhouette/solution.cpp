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
    V<int> b(n + 1);
    rep(i,1,n)cin >> b[i];
    auto a = b;
    sort(all());
    int mx = *max_element(all());
    if(a[1] != 0){
        cout << -1 << '
';
        return ;
    }
    int cnt = 0,cur = 0,sum = 0;
    map<int,int> mp;
    int mpcur = -1;
    int yz = -1;
    rep(i,1,n){
        int x = a[i];
        if(x == cur){
            cnt++;
        }else{
            if((x - sum) % cnt != 0){
                cout << -1 << '
';
                return ;
            }
            
            if((x - sum) / cnt <= mpcur){
                cout << -1 << '
';
                return ;
            }
            mp[cur] = (x - sum) / cnt;
            yz = max(yz,(x - sum) / cnt);
            mpcur = mp[cur];
 
            sum = x;
            cur = x;
            cnt = 1;
        }
    }
    mp[mx] = yz + 1;
    rep(i,1,n){
        if(mp[b[i]] == 0){
            cout << 1 << ' ';
        }else{
            cout << mp[b[i]] << ' ';
        }
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