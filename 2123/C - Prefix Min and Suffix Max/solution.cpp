#include <bits/stdc++.h>
using namespace std;
#define int long long
void deal(){
    string ans = "";
    int n;cin >> n;
    vector<int> a(n);
    vector<int> premin(n);
    vector<int> sufmax(n);
    int curmin = 100000000,curmax = -1;
    for(int i=0;i<n;i++){
        cin >> a[i];
        if(a[i] < curmin){
            curmin = a[i];
            premin[i] = a[i];
        }
    }
    for(int i=n-1;i>=0;i--){
        if(a[i] > curmax){
            curmax = a[i];
            sufmax[i] = a[i];
        }
    }
 
    for(int i=0;i<n;i++){
        if(a[i] == premin[i] || a[i] == sufmax[i]){
            ans += '1';
        }else{
            ans += '0';
        }
    }
    cout << ans << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
 
    int T;cin >> T;
    while(T--)deal();
    return 0;
}