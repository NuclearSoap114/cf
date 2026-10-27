#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void O_o(){
    int n;cin >> n;
    map<int,int> cnt;
    for(int i=0;i<n;i++){
        int tmp;cin >> tmp;
        cnt[tmp]++;
    }
    int ans = 0;
    for(auto [x,y] : cnt){
        if(y > 1){
            ans += y / 2;
        }
    }
    cout << ans << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
 
    int T;cin >> T;
    while(T--)O_o();
    return 0;
}