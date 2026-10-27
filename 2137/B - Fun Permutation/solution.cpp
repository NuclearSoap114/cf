#include <bits/stdc++.h>
using namespace std;
 
void O_o(){
    int n;cin >> n;
    vector<int> a(n);
    // queue<int> q1,q2,q3;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(auto &x : a){
        cout << n + 1 - x << ' ';
    }
    cout << '
';
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
 
    int T;cin >> T;
    while(T--)O_o();
    return 0;
}