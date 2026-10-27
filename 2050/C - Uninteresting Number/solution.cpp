#include <bits/stdc++.h>
using namespace std;
#define int long long 
 
void O_o(){
    string n;cin >> n;
    int sum = 0;
    int cnt2 = 0;
    int cnt3 = 0;
    for(int i=0;i<n.length();i++){
        int dig = n[i] - '0';
        if(dig == 2)cnt2++;
        if(dig == 3)cnt3++;
        sum += dig;
 
    }
    sum %= 9;
    cnt2 = min(cnt2,8LL);
    cnt3 = min(cnt3,8LL);
    for(int i=0;i<=cnt2;i++){
        for(int j=0;j<=cnt3;j++){
            int tot = sum + 2 * i + 6 * j;
            if(tot % 9 == 0){
                cout << "YES" << '
';
                return ;
            }
        }
    }
    cout << "NO" << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
 
    int T;cin >> T;
    while(T--)O_o();
    return 0;
}