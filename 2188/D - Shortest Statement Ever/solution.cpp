#include <bits/stdc++.h>
using namespace std;
#define int long long
const int inf = 0x3f3f3f3f3f3f3f;
int T,n,f[35][3][3];
struct yz{
    int fx,fy,pi,qi;
}pa[35][3][3];
int aa[] = {1,0};
int bb[] = {0,1};
void O_o(){
    int x,y;
    cin >> x >> y;
    for(int i=0;i<35;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                f[i][j][k] = 4e18;
            }
        }
    }
    f[31][0][0] = 0;
    for(int i=30;i>=0;i--){
        int xi = (x >> i) & 1;
        int yi = (y >> i) & 1;
        // cout << xi << ' ' << yi << '
';
        for(int fx=0;fx<3;fx++){
            for(int fy=0;fy<3;fy++){
                if(f[i + 1][fx][fy] > 3e18){
                    // cout << i << fx << fy << f[i + 1][fx][fy] << '
';
                    continue;
                }
                for(int pi=0;pi<=1;pi++){
                    for(int qi=0;qi<=1;qi++){
                        if(pi && qi)continue;
                        int nfx = fx,nfy = fy;
                        int xiaohao = 0;
                        if(fx == 0){
                            if(pi > xi)nfx = 1;
                            else if(pi < xi)nfx = 2;
                        }
                        if(nfx == 1)xiaohao += (pi - xi) << i;
                        else if(nfx == 2)xiaohao += (xi - pi) << i;
                        if(fy == 0){
                            if(qi > yi)nfy = 1;
                            else if(qi < yi)nfy = 2;
                        }
                        if(nfy == 1)xiaohao +=(qi - yi)<< i;
                        else if(nfy == 2)xiaohao +=(yi - qi)<< i;
 
                        if(f[i + 1][fx][fy] + xiaohao < f[i][nfx][nfy]){
                            f[i][nfx][nfy] = f[i + 1][fx][fy] + xiaohao;
                            pa[i][nfx][nfy] = {fx,fy,pi,qi};
                        }
                    }
                }
            }
        }
    }
 
    int curx = 0,cury = 0;
    int mn = 4e18;
    for(int j=0;j<3;j++){
        for(int k=0;k<3;k++){
            if(f[0][j][k] < mn){
                mn = f[0][j][k];
                curx = j;cury = k;
            }
        }
    }
    int ansp = 0,ansq = 0;
    for(int i=0;i<=30;i++){
        //cout << ansp << ' ' << ansq << '
';
        yz res = pa[i][curx][cury];
        if(res.pi)ansp |= (1LL << i);
        if(res.qi)ansq |= (1LL << i);
        curx = res.fx;
        cury = res.fy;
    }
    cout << ansp << ' ' << ansq << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    //make();
    cin >> T;
    while(T--)O_o();
    return 0;
}