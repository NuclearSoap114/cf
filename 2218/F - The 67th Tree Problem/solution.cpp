#include <bits/stdc++.h>
using namespace std;
#define int long long
inline void fmx(int &a,int b){ if(a<b) a=b;}
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define _rep(i,a,b) for(int i=b;i>=a;i--)
#define all() a.begin() + 1,a.begin() + n + 1
const int inf = 1e18;
int T,n,even,odd;
 
void O_o(){
    cin >> even >> odd;
    if((even + odd) % 2 == 0){
        even--;
    }else{
        odd--;
    }
    if(odd < 0 || even < 0 || even > odd){
        cout << "NO" << '
';
        return ;
    }
    cout << "YES" << '
';
    int x = odd - even;
    int node = 2;
    for(int i=1;i<=x;i++){
        cout << 1 << ' ' << node << '
';
        node++;
    }
    for(int i=1;i<=even;i++){
        cout << 1 << ' ' << node << '
';
        cout << node << ' ' << node + 1 << '
';
        node += 2;
    }
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    cin >> T;
    while(T--)O_o();
}