#include <bits/stdc++.h>
using namespace std;
void O_o(){
    int n;cin >> n;
    map<char,int> mp,mpp;
    string s,t;cin >> s >> t;
    for(auto c :s){
        mp[c]++;
    }
    for(auto c : t){
        mpp[c]++;
    }
    for(auto it : mpp){
        if(mp[it.first] != it.second){
            cout << "No" << '
';
            return ;
        }
    }
    cout << "Yes" << '
';
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    int T;cin >> T;
    while(T--)O_o();
    return 0;
}