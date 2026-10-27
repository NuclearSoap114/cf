#include <bits/stdc++.h>
using namespace std;
#define int long long
int T,n,k;
set<int> st;
map<int,int> mp;
vector<int> ans;
 
void O_o(){
    st.clear();mp.clear();ans.clear();
    cin >> n >> k;
    for(int i=1;i<=n;i++){
        int tmp;cin >> tmp;
        st.insert(tmp);
        mp[tmp] = 1;
    }
    while(st.size()){
        int mn = *st.begin();
        st.erase(st.begin());
        ans.push_back(mn);
        for(int cur=mn;cur<=k;cur+=mn){
            if(!mp[cur]){
                cout << -1 << '
';
                return ;
            }
            auto it = st.find(cur);
            if(it != st.end()) st.erase(it);
        }
    }
 
    if(ans.size() == 0){
        cout << -1 << '
';
        return ;
    }
 
    cout << ans.size() << '
';
    for(auto &x : ans){
        cout << x << ' ';
    }
    cout << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    cin >> T;
    while(T--)O_o();
    return 0;
}