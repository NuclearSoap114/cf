#include <bits/stdc++.h>
using namespace std;
#define int long long
int n,k,T,ans;
string a;
 
void O_o(){
    ans = 0;
    cin >> n >> k >> a;
    a = '#' + a;
    for(int i=n;i>=1;i--){
        if(a[i] == '0'){
            bool f = 0;
            for(int j=i-1;j>=i-k&&j>=1;j--){
                if(a[j] == '1'){
                    f = 1;
                    break;
                }
            }
            if(!f)ans++;
        }
    }
    cout << ans << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    cin >> T;
    while(T--)O_o();
    return 0;
}