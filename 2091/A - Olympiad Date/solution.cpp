#include <bits/stdc++.h>
using namespace std;
#define int long long
 
//01.03.2025. 000 1 3 22 5
void deal(){
    int n;cin >> n;
    int c0 = 0,c1 = 0,c3 = 0,c2 = 0,c5 = 0;
    int cnt = 5;
    int ans = 0;
    int f = 0;
    for(int i=1;i<=n;i++){
        int x;cin >> x;
        if(x == 0){
            c0++;
            if(c0 == 3)cnt--;
        }else if(x == 1){
            c1++;
            if(c1 == 1)cnt--;
        }else if(x == 2){
            c2++;
            if(c2 == 2)cnt--;
        }else if(x == 3){
            c3++;
            if(c3 == 1)cnt--;
        }else if(x == 5){
            c5++;
            if(c5 == 1)cnt--;
        }
 
        if(cnt == 0 && !f){
            ans = i;
            f = 1;
        }
    }
    cout << ans << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
 
        int t;cin >> t;
        for(int i=0;i<t;i++){
            deal();
        }
    return 0;
}