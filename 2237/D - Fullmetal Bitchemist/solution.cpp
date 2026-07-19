#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void O_o(){
    int n;
    string s;
    cin >> n >> s;
    s = '#' + s;
    int cnt[3] = {1,0,0};
    int pre = 0;
    int cur = 1;
    int ans = n * (n + 1) / 2;
    for(int i=1;i<=n;i++){
        int x = (s[i] == '1' ? 1 : -1);
        pre = (pre + x + 3) % 3;
        ans -= cnt[pre];
        cnt[pre]++;
        if(i > 1){
            if(s[i] != s[i - 1]){
                cur++;
            }else{
                cur = 1;
            }
            ans -= (cur - 1) / 2;
        }
    }
    cout << ans << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while(T--)O_o();
    return 0;
}