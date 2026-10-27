#include <bits/stdc++.h>
using namespace std;
#define int long long
#define go(i,a,b) for(int i=a;i<=b;i++)
#define og(i,a,b) for(int i=b;i>=a;i--)
const int MAXN = 2e5 + 10;
int T,n;
vector<vector<int>> pfac(MAXN);
 
void O_o(){
    cin >> n;
    vector<int> a(n + 1);
    map<int,int> mp;
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    for(int i=1,tmp;i<=n;i++)cin >> tmp;
 
    for(int i=1;i<=n;i++){
        if(a[i] == 1)continue;
        for(auto &x : pfac[a[i]]){
            if(mp[x]){
                cout << 0 << '
';
                return ;
            }
            mp[x]++;
        }
    }
    for(int i=1;i<=n;i++){
        for(auto &x : pfac[a[i]]){
            mp[x]--;
        }
        int tmp = a[i] + 1;
        for(auto &x : pfac[tmp]){
            if(mp[x]){
                cout << 1 << '
';
                return ;
            }
        }
        for(auto &x : pfac[a[i]]){
            mp[x]++;
        }
    }
    cout << 2 << '
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