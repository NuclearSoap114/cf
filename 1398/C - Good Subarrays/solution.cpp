#include <iostream>
#include <unordered_map>
using namespace std;
int T,n,pre;
long long ans;
string s;
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> T;
    while(T--){
        ans = pre = 0;
        cin >> n >> s;
        unordered_map<int,int> mp;
        mp[0] = 1;
        for(char c : s){
            pre += c - '0' - 1;
            ans += mp[pre]++;
        }
        cout << ans << '
';
    }
    return 0;
}