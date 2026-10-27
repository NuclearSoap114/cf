#include <bits/stdc++.h>
using namespace std;
#define int long long
void O_o(){
    int n;cin >> n;
    vector<int> a(n);
    for(auto &x : a){
        cin >> x;
    }
    int cnt = 0;
    for(int i=0;i<n;i++){
        if(a[i] & 1)cnt++;
    }
    if(cnt != 0 && cnt != n){
        sort(a.begin(),a.end());
        for(auto &x : a)cout << x << ' ';
        cout << '
';
    }else{
       for(auto &x : a)cout << x << ' ';
        cout << '
';
    }
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    int T;cin >> T;
    while(T--)O_o();
    return 0;
}