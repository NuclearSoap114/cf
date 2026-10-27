#include <bits/stdc++.h>
using namespace std;
#define int long long
int T;
 
void O_o(){
    int n,x;
    cin >> n >> x;
    
    vector<int> gains;
    int base=0;
    
    for(int i=0;i<n;i++){
        int a,b,c;
        cin >> a >> b >> c;
        if(b>=1){
            base+=(b-1)*a;
        }
        int zhouqi = b*a - c;
        if(zhouqi>0){
            gains.push_back(zhouqi);
        }
    }
    
    if(base>=x){
        cout << 0 << '
';
        return;
    }
    
    int need = x - base;
    
    sort(gains.rbegin(),gains.rend());
    
    int ans = 0;
    int sum = 0;
    
    for(int g:gains){
        if(sum>=need) break;
        int can_take = (need - sum + g - 1) / g;
        ans += can_take;
        sum += can_take * g;
    }
    
    if(sum >= need){
        cout << ans << '
';
    }else{
        cout << -1 << '
';
    }
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
 
    cin >> T;
    while(T--)O_o();
    return 0;
}