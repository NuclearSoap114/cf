#include <bits/stdc++.h>
using namespace std;
#define int long long
void O_o(){
    int n;cin >> n;
    vector<int> even,odd;
    int ans = 0;
    for(int i=0;i<n;i++){
        int tmp;cin >> tmp;
        if(tmp & 1)odd.emplace_back(tmp);
        else even.emplace_back(tmp);
    }
    sort(odd.rbegin(),odd.rend());
    sort(even.rbegin(),even.rend());
    if(odd.size()){
        for(auto &x : even){
            ans += x;
        }
    }
    int len = odd.size();
    len = (len + 1) >> 1;
    for(int i=0;i<len;i++){
        ans += odd[i];
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