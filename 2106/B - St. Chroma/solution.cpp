#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void O_o(){
    int n,x;cin >> n >> x;
    vector<int> ans,tmp;
    for(int i=0;i<n;i++){
        if(i < x){
            ans.push_back(i);
        }else{
            tmp.push_back(i);
        }
    }
    if(tmp.size() > 0){
        for(int i=tmp.size()-1;i>=0;i--){
            ans.push_back(tmp[i]);
        }
    }
    for(int num : ans){
        cout << num << ' ';
    }
    cout << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
 
    int T;cin >> T;
    while(T--)O_o();
    return 0;
}