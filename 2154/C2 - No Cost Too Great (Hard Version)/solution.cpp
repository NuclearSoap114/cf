#include <bits/stdc++.h>
using namespace std;
#define int long long
#define go(i,a,b) for(int i=a;i<=b;i++)
#define og(i,a,b) for(int i=b;i>=a;i--)
const int MAXN = 2e5 + 10,inf = 0x3f3f3f3f3f3f3f3f;
int T,n,ans1,ans2;
vector<vector<int>> pfac(MAXN);
 
struct yz
{
    int a,b;
};
 
 
void O_o(){
    ans2 = ans1 = inf;
    cin >> n;
    vector<yz> yyzz(n + 1);
    map<int,int> mp;
    for(int i=1;i<=n;i++)cin >> yyzz[i].a;
    for(int i=1;i<=n;i++)cin >> yyzz[i].b;
    //0
    for(int i=1;i<=n;i++){
        if(yyzz[i].a == 1)continue;
        for(auto &x : pfac[yyzz[i].a]){
            if(mp[x]){
                cout << 0 << '
';
                return ;
            }
            mp[x]++;
        }
    }
    //1
    for(int i=1;i<=n;i++){
        for(auto &x : pfac[yyzz[i].a]){
            mp[x]--;
        }
        int tmp = yyzz[i].a + 1;
        for(auto &x : pfac[tmp]){
            if(mp[x]){
                ans1 = min(ans1,yyzz[i].b);
            }
        }
        for(auto &x : pfac[yyzz[i].a]){
            mp[x]++;
        }
    }
    //2
    sort(yyzz.begin() + 1,yyzz.begin() + n + 1,[&](yz xx,yz yy) -> bool {
        return xx.b < yy.b;
    });
    if((yyzz[1].a & 1) && (yyzz[2].a & 1)){
        ans2 = min(ans2,yyzz[1].b+ yyzz[2].b);
    }else if(!(yyzz[1].a& 1) && (yyzz[2].a & 1)){
        ans2 = min(ans2,yyzz[2].b);
    }else if((yyzz[1].a& 1) && !(yyzz[2].a & 1)){
        ans2 = min(ans2,yyzz[1].b);
    }else{
        ans2 = 0;
    }
    //multiple
    vector<int> check;
    for(int i=2;i<=n;i++){
        for(auto &x : pfac[yyzz[i].a]){
            check.push_back(x);
        }
    }
    int ans = inf;
    for(auto &x : check){
        int times = x - (yyzz[1].a % x);
        if(times == x){
            times = 0;
        }
        ans = min({ans,times * yyzz[1].b});
    }
    cout << min({ans,ans1,ans2}) << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    for(int i=2;i<=MAXN;i++){
        if(!pfac[i].empty())continue;
        for(int j=i;j<=MAXN;j+=i){
            pfac[j].push_back(i);
        }
    }
    cin >> T;
    while(T--)O_o();
}