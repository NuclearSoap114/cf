#include <bits/stdc++.h>
using namespace std;
#define int long long 
 
void O_o(){
    int n;
    string s;
    cin >> n >> s;
    auto cal = [&](char c)->int{
        vector<int> pos;
        for(int i = 0;i<n;i++){
            if(s[i] == c)pos.push_back(i+1);
        }
        int m = pos.size();
        if(m == 0)return 0;
        vector<int> q(m);
        for(int i = 0;i<m;i++){
            q[i] = pos[i]-i;
        }
        sort(q.begin(),q.end());
        int med = q[m/2];
        int L = 1,R = n-m+1;
        int l = max(L,min(R,med));
        int ans = 0;
        for(int i = 0;i<m;i++){
            ans += abs(q[i]-l);
        }
        return ans;
    };
    int ans = min(cal('a'),cal('b'));
    cout << ans << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
 
    int T;cin >> T;
    while(T--)O_o();
    return 0;
}