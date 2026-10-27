#include <bits/stdc++.h>
using namespace std;
#define int long long 
int q,x,y;
 
void O_o(){
    cin >> q;
    int p = 0;
    unordered_map<int,vector<int>> mp;
 
    for(int i = 1;i <= q;i++){
        int op;cin >> op;
        if(op == 1){
            cin >> x;
            mp[x].push_back(++p);
        }else{
            cin >> x >> y;
            if(x != y){
                if(mp[x].size() > mp[y].size())mp[x].swap(mp[y]);
                for(int &num : mp[x])mp[y].push_back(num);
                mp[x].clear();
            }
        }
    }
    vector<int> a(p + 1);
    for(auto it : mp){
        int xx = it.first;
        for(auto &x : it.second){
            a[x] = xx;
        }
    }
 
    for(int i = 1;i <= p;i++){
        cout << a[i] << ' ';
    }
 
    cout << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    O_o();
    return 0;
}