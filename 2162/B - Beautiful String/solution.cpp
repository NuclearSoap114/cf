#include <bits/stdc++.h>
using namespace std;
#define int long long
void yz(){
    vector<int> a;
    int n;cin >> n;
    string s;cin >> s;
    for(int i=0;i<n;i++){
        if(s[i] == '1'){
            a.push_back(i + 1);
        }
    }
    cout << a.size() << '
';
    for(auto &x : a)cout << x << ' ';
    cout << '
';
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
 
    int T;cin >> T;
    while(T--)yz();
    return 0;
}