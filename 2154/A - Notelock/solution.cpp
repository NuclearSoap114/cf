#include <bits/stdc++.h>
using namespace std;
#define int long long
#define go(i,a,b) for(int i=a;i<=b;i++)
#define og(i,a,b) for(int i=b;i>=a;i--)
int T,n,k;
string s;
 
void O_o(){
    int ans = 0;
    cin >> n >> k >> s;
    s = '#' + s;
    for(int i=1;i<=n;i++){
        if(s[i] == '1'){
            bool f = 0;
            for(int j=i-1;j>=max(1LL,i-k+1);j--){
                if(s[j] == '1'){
                    f = 1;
                }
            }
            if(!f){
                ans++;
            }
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
}