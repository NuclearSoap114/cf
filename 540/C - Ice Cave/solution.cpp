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
const int inf = 1LL << 62,N = 5e2 + 10;
const double pi = acos(-1);
// --------------- AC ---------------
int n,m,sx,sy,tx,ty;
char a[N][N];
bool vis[N][N];
int dx[] = {1,0,-1,0},dy[] = {0,1,0,-1};
 
bool inside(int x,int y){
    return x>=1&&y>=1&&x<=n&&y<=m;
}
 
void O_o(){
    cin>>n>>m;
 
    rep(i,1,n){
        rep(j,1,m){
            cin>>a[i][j];
        }
    }
 
    cin>>sx>>sy>>tx>>ty;
 
    queue<pii> q;
    q.push({sx,sy});
 
    while(!q.empty()){
        auto now=q.front();
        q.pop();
 
        int x=now.F,y=now.S;
 
        if(vis[x][y])continue;
        vis[x][y]=1;
 
        rep(i,0,3){
            int xx=x+dx[i];
            int yy=y+dy[i];
 
            if(!inside(xx,yy))
                continue;
            if(a[xx][yy]=='X' && !(xx==tx&&yy==ty))
                continue;
            if(a[xx][yy]=='X'){
                cout<<"YES
";
                return;
            }
 
            q.push({xx,yy});
        }
    }
 
    if(!vis[tx][ty]){
        cout<<"NO
";
        return;
    }
 
    int cnt=0;
 
    rep(i,0,3){
        int xx=tx+dx[i];
        int yy=ty+dy[i];
 
        if(!inside(xx,yy))
            continue;
 
        if(a[xx][yy]=='.'||(xx==sx&&yy==sy))
            cnt++;
    }
 
    cout<<(cnt>=2?"YES":"NO")<<'
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    O_o();
 
    return 0;
}