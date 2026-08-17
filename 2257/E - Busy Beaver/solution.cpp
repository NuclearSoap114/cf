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
int T,n,x;
 
struct Block{
    int need,gain,end;
};
 
void O_o(){
    cin >> n >> x;
    V<V<int>> a(n + 1),b(n + 1);
    V<V<Block>> blk(n + 1);
    rep(i,1,n){
        int m;
        cin >> m;
        a[i].resize(m);
        b[i].resize(m);
        rep(j,0,m - 1)cin >> a[i][j];
        rep(j,0,m - 1)cin >> b[i][j];
        int sum = 0,need = 0;
        rep(j,0,m - 1){
            need = max(need,a[i][j] - sum);
            sum += b[i][j] - a[i][j];
            if(sum >= 0){
                blk[i].pb({need,sum,j});
                sum = 0;
                need = 0;
            }
        }
    }
    // {need, building}
    priority_queue<pii,V<pii>,greater<pii>> pq; 
    V<int> cur(n + 1,0);
    V<int> done(n + 1,0);
    rep(i,1,n){
        if(!blk[i].empty()){
            pq.push({blk[i][0].need,i});
        }
    }
    int c = x;
    while(!pq.empty()){
        auto [need,id] = pq.top();
        if(need > c)break;
        pq.pop();
        Block now = blk[id][cur[id]];
        c += now.gain;
        done[id] = now.end + 1;
        cur[id]++;
        if(cur[id] < (int)blk[id].size()){
            pq.push({blk[id][cur[id]].need,id});
        }
    }
    int ans = -1,id = 1;
    rep(i,1,n){
        int have = c;
        int h = done[i];
        for(int j=done[i];j<(int)a[i].size();j++){
            if(have < a[i][j])break;
            have += b[i][j] - a[i][j];
            h++;
        }
        if(h > ans){
            ans = h;
            id = i;
        }
    }
    cout << ans << ' ' << id << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> T;
    while(T--)O_o();
    return 0;
}