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
int T,n,sum,ans,x,add,pre;
 
void O_o(){
    add = sum = pre = 0;
    cin >> n;
    ans = n;
    priority_queue<int,V<int>,greater<int>> pq;
    rep(i,1,n){
        cin >> x;
        if(x < 0)pq.push(x);
        pre = pre + x;
        while(pre + add < 0){
            add += -pq.top();
            pq.pop();
            ans--;
        }
    }
    cout << ans << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    T = 1;
    while(T--)O_o();
    return 0;
}