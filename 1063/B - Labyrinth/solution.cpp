#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 2010;
int n,m,bgx,bgy,xlim,ylim,ans,dx[] = {-1,1,0,0},dy[] = {0,0,1,-1};//{上、下、右、左};
char a[N][N];
int dis[N][N];
 
bool inside(int x,int y){
    return x >= 1 && y >= 1 && x <= n && y <= m;
}
 
struct node{
    int x,y,step;
};
 
void O_o(){
    ans = 0;
    cin >> n >> m >> bgx >> bgy >> xlim >> ylim;
    for(int i = 1;i <= n;i++){
        string s;cin >> s;
        s = '#' + s;
        for(int j = 1;j <= m;j++){
            a[i][j] = s[j];
            dis[i][j] = 1e18;
        }
    }
 
    deque<node> q;
 
    q.push_back({bgx,bgy,0});
    dis[bgx][bgy] = 0;
 
    while(!q.empty()){
        auto [x,y,d] = q.front();
        q.pop_front();
        if(d > dis[x][y])continue;
        for(int i = 0;i < 4;i++){
            int xx = x + dx[i];
            int yy = y + dy[i];
            if(!inside(xx,yy) || a[xx][yy] == '*')continue;
            int nd = d + (i == 3);
            if(nd >= dis[xx][yy])continue;
            dis[xx][yy] = nd;
            if(i == 3)q.push_back({xx,yy,nd});
            else q.push_front({xx,yy,nd});
        }
    }
 
    int ans = 0;
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= m;j++){
            if (dis[i][j] == 1e18)continue;
            int L = dis[i][j];
            int R = L + j - bgy;
            if (L <= xlim && R <= ylim) ans++;
        }
    }
 
    cout << ans << '
';
}   
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    O_o();
    return 0;
}