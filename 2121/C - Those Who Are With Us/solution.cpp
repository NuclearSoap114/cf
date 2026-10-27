#include <bits/stdc++.h>
using namespace std;
#define int long long
 
bool ok(const std::vector<std::pair<int, int>>& pos){
    if (pos.size() <= 1) return true;
    int cross_row = pos[0].first;
    int cross_col = pos[0].second;
    for (size_t i = 1;i < pos.size();i++){
        if (pos[i].first != cross_row && pos[i].second != cross_col){
            int r1 = cross_row, c1 = pos[i].second;
            int r2 = pos[i].first, c2 = cross_col;
            bool valid1 = true, valid2 = true;
            for (const auto& p : pos){
                if (p.first != r1 && p.second != c1) valid1 = false;
                if (p.first != r2 && p.second != c2) valid2 = false;
                if (!valid1 && !valid2) break;
            }
            
            return valid1 || valid2;
        }
    }
    return true;
}
 
void O_o(){
    int n,m;cin >> n >> m;
    int maxn = -1;
    vector<pair<int,int>> pos;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int tmp;cin >> tmp;
            if(tmp > maxn){
                pos.clear();
                maxn = tmp;
                pos.push_back({i,j});
            }else if(tmp == maxn){
                pos.push_back({i,j});
            }
        }
    }
 
    sort(pos.begin(),pos.end());
 
    if(ok(pos)){
        cout << maxn - 1 << '
';
    }else{
        cout << maxn << '
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