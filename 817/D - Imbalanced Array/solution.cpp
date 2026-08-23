#include <bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i,l,r) for(int i=(l);i<=(r);i++)
#define rep_(i,l,r) for(int i=(l);i>=(r);i--)
#define all(i) i.begin() + 1,i.begin() + n + 1
#define pii pair<int,int>
#define V vector
#define F first
#define S second
#define pb push_back
#define is insert
const int inf = 1LL << 62,N = 2e5 + 10;
const double pi = acos(-1);
// --------------- AC ---------------
int T,n;
 
void O_o(){
    cin >> n;
    V<int> arr(n + 2);
    arr[0] = arr[n + 1] = inf;
    rep(i,1,n){
        cin >> arr[i];
    }
 
    V<int> pre(n + 2),suf(n + 2);
 
    auto calc = [&](V<int> &a) -> void {
        deque<pii> dq,dq2;
        dq.push_back({inf,0});
        rep(i,1,n){
            while(!dq.empty() && dq.back().first <= a[i])dq.pop_back();
            pre[i] = dq.back().second;
            dq.push_back({a[i],i});
        }
        dq2.push_back({inf,n + 1});
        rep_(i,n,1){
            while(!dq2.empty() && dq2.back().first < a[i])dq2.pop_back();
            suf[i] = dq2.back().second;
            dq2.push_back({a[i],i});
        }
    };
    
    auto brr = arr;
    for(int &x : brr)x = -x;
 
    int ans = 0;
 
    calc(arr);
    rep(i,1,n){
        int l = i - pre[i],r = suf[i] - i;
        ans += arr[i] * l * r;
    }
 
    calc(brr);
    rep(i,1,n){
        int l = i - pre[i],r = suf[i] - i;
        ans += brr[i] * l * r;
    }
    cout << ans << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    T = 1;
    while(T--)O_o();
    return 0;
}