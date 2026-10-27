#include <bits/stdc++.h>
using namespace std;
#define int long long
#define F first
#define S second
#define go(i,a,b) for(int i=a;i<=b;i++)
#define og(i,a,b) for(int i=b;i>=a;i--)
int T,n,ax,ay,bx,by;
 
void O_o(){
    cin >> n >> ax >> ay >> bx >> by;
    vector<int> x(n + 10),y(n + 10);
    for(int i=1;i<=n;i++)cin >> x[i];
    for(int i=1;i<=n;i++)cin >> y[i];
    map<int,int> mn,mx;
    mn[ax] = mx[ax] = ay;
    mn[bx] = mx[bx] = by;
    for(int i=1;i<=n;i++){
        if(!mx.count(x[i])){
            mx[x[i]] = y[i];
        }else{
            mx[x[i]] = max(mx[x[i]],y[i]);
        }
        if(!mn.count(x[i])){
            mn[x[i]] = y[i];
        }else{
            mn[x[i]] = min(mn[x[i]],y[i]);
        }
    }
    vector<int> up(n + 10,0),down(n + 10,0);
    int cnt = 0;
    int cur_x = ax;
    for(auto &i : mx){
        int xx = i.first;
        if(xx == ax){
            up[0] = down[0] = 0;
            continue;
        }
        int need = mx[xx] - mn[xx];
        cnt++;
        up[cnt] = min(up[cnt - 1] + abs(mx[cur_x] - mn[xx]),down[cnt - 1] + abs(mn[cur_x] - mn[xx])) + need;
        down[cnt] = min(up[cnt - 1] + abs(mx[cur_x] - mx[xx]),down[cnt - 1] + abs(mn[cur_x] - mx[xx])) + need;
        cur_x = xx;
    }
    cout << min(up[cnt],down[cnt]) + bx - ax << '
'; 
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    cin >> T;
    while(T--)O_o();
}