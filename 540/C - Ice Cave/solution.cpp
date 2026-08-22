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
const int inf = 1LL << 62,N = 2e3 + 10;
const double pi = acos(-1);
// --------------- AC ---------------
int T,n,m,sx,sy,tx,ty;
int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};
char a[N][N];
bool vis[N][N];
 
bool inside(int x,int y){
    return x >= 1 && y >= 1 && x <= n && y <= m;
}
 
void O_o(){
    cin >> n >> m;
    rep(i,1,n)rep(j,1,m)cin >> a[i][j];
    cin >> sx >> sy >> tx >> ty;
    queue<pii> q;
    q.push({sx,sy});
    bool ok = 0;
    while(!q.empty()){
        auto [x,y] = q.front();
        q.pop();
        if(vis[x][y])continue;
        vis[x][y] = true;
        if(x == tx && y == ty)ok = 1;
        rep(i,0,3){
            int xx = x + dx[i];
            int yy = y + dy[i];
            if(!inside(xx,yy))continue;
            if(a[xx][yy] == 'X' && (xx != tx || yy != ty))continue;
            if(a[xx][yy] == 'X'){
                cout << "YES" << '
';
                return ;
            }
            q.push({xx,yy});
        }
    }
 
    int cnt = 0;
    rep(i,0,3){
        int xx = dx[i] + tx;
        int yy = dy[i] + ty;
        if(inside(xx,yy) && (a[xx][yy]=='.' || (xx==sx && yy==sy)))cnt++;
        // if(inside(xx,yy) && a[xx][yy] == '.')cnt++;
    }
    if(ok){
        if(cnt >= 2){
            cout << "YES" << '
';
            return ;
        }
    }
    if(sx == tx && sy == ty){
        if(cnt >= 1){
            cout << "YES" << '
';
            return ;
        }
    }
    cout << "NO" << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    T = 1;
    while(T--)O_o();
    return 0;
}