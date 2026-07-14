#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 2e5 + 10,inf = 1e18;
int T,n,a,b,k;
 
pair<int,int> dis(int x,int y){
    int z = min(x,y);
    y = max(x,y);
    x = z;
    return make_pair(y - x,n - y + x);
}
 
void O_o(int n,int a,int b,int k){
    int disA = dis(a,b).first,disB = dis(a,b).second;
    if(n <= 3){
        cout << 1 << '
';
        return ;
    }
    if(disA != disB){
        cout << k + min(disA,disB) << '
';
        return ;
    }else{
        if(disA == 1){
            cout << 1 << '
';
            return ;
        }
        b++;
        if(b == n + 1)b = 1;
        O_o(n,a,b,k + 1);
    }
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> T;
    while(T--){
        cin >> n >> a >> b >> k;
        O_o(n,a,b,k);
    }
}