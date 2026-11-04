#include <bits/stdc++.h>
using namespace std;
#define int long long
 
int n,m,q,len;
string s;
 
void O_o(){
    cin >> n >> m >> q >> s;
    s = " " + s;
 
    vector<int> order(1,0),pos(n + 1,0);
    set<int> st;
 
    for(int i = 1;i <= n;i++){
        st.insert(i);
    }
 
    for(int i = 1;i <= m;i++){
        int l,r;
        cin >> l >> r;
        auto it = st.lower_bound(l);
 
        while(it != st.end() && *it <= r){
            int x = *it;
 
            pos[x] = order.size();
            order.push_back(x);
 
            it = st.erase(it);
        }
    }
 
    int cnt = 0;
    for(int i = 1;i <= n;i++){
        if(s[i] == '1')cnt++;
    }
 
    len = order.size() - 1;
    int k = min(cnt,len);
 
    int ans = 0;
    for(int i = 1;i <= k;i++){
        if(s[order[i]] == '0')ans++;
    }
 
    for(int i = 1;i <= q;i++){
        int x;
        cin >> x;
 
        int k = min(cnt,len);
 
        if(pos[x] != 0 && pos[x] <= k){
            if(s[x] == '0')ans--;
            else ans++;
        }
 
        if(s[x] == '0'){
            s[x] = '1';
            cnt++;
        }else{
            s[x] = '0';
            cnt--;
        }
        int nk = min(cnt,len);
        if(nk > k){
            if(s[order[nk]] == '0')ans++;
        }
        if(nk < k){
            if(s[order[k]] == '0')ans--;
        }
 
        cout << ans << "
";
    }
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    O_o();
    return 0;
}