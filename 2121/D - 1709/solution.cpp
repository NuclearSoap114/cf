#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void deal(){
    int n;cin >> n;
    vector<int> a(n),b(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        cin >> b[i];
    }
    vector<pair<int,int>> ans;
    for(int i=0;i<n - 1;i++){
        bool f = 0;
        for(int j=0;j<n-i-1;j++){
            if(a[j] > a[j+1]){
                swap(a[j],a[j+1]);
                f = 1;
                ans.push_back({1,j+1});
            }
        }
        if(!f)break;
    }
 
    for(int i=0;i<n - 1;i++){
        bool f = 0;
        for(int j=0;j<n-i-1;j++){
            if(b[j] > b[j+1]){
                swap(b[j],b[j+1]);
                f = 1;
                ans.push_back({2,j+1});
            }
        }
        if(!f)break;
    }
 
    for(int i=0;i<n;i++){
        if(a[i] > b[i]){
            ans.push_back({3,i+1});
        }
    }
    cout << ans.size() << '
';
    for(auto [x,y] : ans){
        cout << x << ' ' << y << '
';
    }
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
 
    int _;cin >> _;
    while(_--)deal();
    return 0;
}