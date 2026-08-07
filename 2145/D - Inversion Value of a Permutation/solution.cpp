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
const int inf = 1LL << 62,N = 30 * 29 + 5;
const double pi = acos(-1);
// --------------- AC ---------------
int T,n,mxk,k,K;
bool dp[31][N];
int pre[31][N];
 
void O_o(){
    cin >> n >> k;
    mxk = (n - 1) * n >> 1;
    memset(dp,false,sizeof dp);
    memset(pre,0,sizeof pre);
    K = mxk - k;
    dp[0][0] = 1;
    rep(i,1,n){
        rep(j,0,mxk){
            rep(len,1,i){
                int w = (len - 1) * len >> 1;
                if(j - w < 0)break;
                if(dp[i - len][j - w]){
                    dp[i][j] = 1;
                    pre[i][j] = len;
                }
            }
        }
    }
    if(!dp[n][K]){
        cout << 0 << '
';
        return ;
    }
    V<int> ans;
    int nn = n,KK = K;
    while(nn > 0){
        int tmp = pre[nn][KK];
        ans.pb(tmp);
        nn -= tmp;
        KK -= (tmp - 1) * tmp >> 1;
    }
    V<int> a(n + 1);
    rep(i,1,n)a[i] = i;
    int pos = n;
    for(int len : ans){
        int st = pos - len + 1;
        rep(i,st,pos){
            cout << a[i] << ' ';
        }
        pos -= len;
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