#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void O_o(){
    int n,c;cin >> n >> c;
    vector<int> a(n);
    for(auto &x : a){
        cin >> x;
    }
    sort(a.rbegin(),a.rend());
    int free = 0;
    for(auto &x : a){
        if(x * (1LL << free) <= c){
            free++;
        }
    }
    cout << n - free << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
 
    int T;cin >> T;
    while(T--)O_o();
    return 0;
}