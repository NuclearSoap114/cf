#include <bits/stdc++.h>
using namespace std;
#define int long long
int n,T,k;
 
void O_o(){
    cin >> n >> k;
    vector<int> cnt(n + 1,0),c;
    for(int i=1;i<=n;i++){
        int x;cin >> x;
        cnt[x]++;
    }
    for(int i=1;i<=n;i++){
        if(cnt[i]){
            c.push_back(cnt[i]);
        }
    }
    sort(c.begin(),c.end());
    int m = c.size();
    vector<int> suf(m + 1,0);
    for(int i=m - 1;i>=0;i--){
        suf[i] = suf[i + 1] + c[i];
    }
    int ans = 0;
    for(int i=0;i<m;){
        int x = c[i];
        int num = m - i;
        int sum = suf[i];
        int minLen = sum - num * (x - 1);
        if(minLen <= k && (k - minLen) % num == 0)ans++;
        while(i < m && c[i] == x)i++;
    }
    cout << ans << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> T;
    while(T--)O_o();
    return 0;
}