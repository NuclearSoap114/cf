#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MAXN = 2e5 + 10; 
const int INF = 1e18;
int n,k;
int x,a[MAXN];
vector<pair<int,int>> seg;
set<int> ans;
// bool check(int m){
//     seg.clear();
//     int sum = 0;
//     a[0] = -INF;
//     a[n] = INF;
//     for(int i=0;i<=n;i++){
//         int l = max(0LL,(a[i] + m));
//         int r = min(x,(a[i+1] - m));
//         sum += max(0LL,r - l + 1);
//         seg.push_back(make_pair(l,r));
//     }
//     return sum >= k;
// }
bool check(int mid){
    seg.clear();
    a[0] = -INF;
    a[n + 1] = INF;
    int cnt = 0;
    for(int i = 1;i<=n+1;i++) {
        int l = max(0ll, a[i - 1] + mid);
        int r = min(x, a[i] - mid);
        if(l <= r){
            cnt += r - l + 1;
            seg.push_back(make_pair(l,r));
        }
    }
    return cnt >= k;
}
void O_o(){
    cin >> n >> k >> x;
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    sort(a + 1,a + n + 1);
    int L = 0,R = x + 1;
    while(L + 1 != R){
        int m = L + R >> 1;
        if(check(m)) L = m;
        else R = m;
    }
    seg.clear();
    check(L);
    int cnt = 0;
    ans.clear();
    for(auto &[l,r] : seg){
        for(int i=l;i<=r;i++){
            ans.insert(i);
            if(ans.size() == k)break;
        }
        if(ans.size()==k)break;
    }
    for(auto &it : ans){
        cout << it << ' ';
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