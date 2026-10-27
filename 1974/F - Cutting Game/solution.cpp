#include <bits/stdc++.h>
using namespace std;
#define int long long
int T,row,col,n,m,num;
char op;
 
struct node{
    int x,y,id;
};
 
void O_o(){
    cin >> row >> col >> n >> m;
    vector<node> X(n + 1),Y(n + 1);
 
    for(int i = 1;i <= n;i++){
        cin >> X[i].x >> X[i].y;
        X[i].id = i;
        Y[i] = X[i];
    }
 
    sort(X.begin() + 1,X.end(),[&](node x,node y){
        return x.x < y.x;
    });
 
    sort(Y.begin() + 1,Y.end(),[&](node x,node y){
        return x.y < y.y;
    });
 
    int up = 1,down = row;
    int left = 1,right = col;
    int xl = 1,xr = n,yl = 1,yr = n;
 
    vector<int> vis(n + 1,0);
    int A = 0,B = 0;
 
    for(int i = 1;i <= m;i++){
        cin >> op >> num;
 
        auto take = [&](int id){
            if(vis[id])return;
            vis[id] = 1;
            if(i & 1)A++;
            else B++;
        };
 
        if(op == 'U'){
            up += num;
            while(xl <= xr && X[xl].x < up){
                take(X[xl].id);
                xl++;
            }
        }else if(op == 'D'){
            down -= num;
            while(xl <= xr && X[xr].x > down){
                take(X[xr].id);
                xr--;
            }
        }else if(op == 'L'){
            left += num;
            while(yl <= yr && Y[yl].y < left){
                take(Y[yl].id);
                yl++;
            }
        }else if(op == 'R'){
            right -= num;
            while(yl <= yr && Y[yr].y > right){
                take(Y[yr].id);
                yr--;
            }
        }
    }
 
    cout << A << ' ' << B << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> T;
    while(T--)O_o();
    return 0;
}