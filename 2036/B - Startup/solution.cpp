#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 2e5 + 10;
 
bool cmp(int a,int b){
    return a > b;
}
 
void O_o(){
    int n,k;cin >> n >> k;
    map<int,int> mp;
    for(int i=0;i<k;i++){
        int a,b;cin >> a >> b;
        mp[a] += b;
    }
    vector<int> a;
    int ans = 0;
    for(auto it : mp){
        a.emplace_back(it.second);
    }
    sort(a.begin(),a.end());
    reverse(a.begin(),a.end());
    for(int i=0;i<min(n,(int)a.size());i++){
        ans += a[i];
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