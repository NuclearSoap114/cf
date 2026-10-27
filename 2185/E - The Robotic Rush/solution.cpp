#include <bits/stdc++.h>
using namespace std;
#define int long long
#define go(i,a,b) for (int i = a;i <= b;i++)
#define og(i,a,b) for (int i = b;i >= a;i--)
 
const int INF = 1e18;
 
void O_o(){
    int n,m,k;
    cin >> n >> m >> k;
    vector<int> a(n),b(m);
    go(i,0,n - 1) cin >> a[i];
    go(i,0,m - 1) cin >> b[i];
    string s;
    cin >> s;
 
    sort(b.begin(),b.end());
 
    vector<int> P(k + 1);
    P[0] = 0;
    go(i,1,k){
        if (s[i - 1] == 'R') P[i] = P[i - 1] + 1;
        else P[i] = P[i - 1] - 1;
    }
 
    int rsz = 2 * k + 1;
    vector<int> F(rsz,INF);
    go(i,0,k){
        int v = P[i];
        int idx = v + k;
        if (idx >= 0 && idx < rsz){
            if (F[idx] > i) F[idx] = i;
        }
    }
 
    vector<int> L(rsz,INF),R(rsz,INF);
    L[0] = F[0];
    go(i,1,rsz - 1){
        L[i] = min(L[i - 1],F[i]);
    }
    R[rsz - 1] = F[rsz - 1];
    og(i,0,rsz - 2){
        R[i] = min(R[i + 1],F[i]);
    }
 
    vector<int> die_time(k + 2,0);
 
    for (int pos : a){
        auto it = lower_bound(b.begin(),b.end(),pos);
        int left_spike = -INF,rs = INF;
        if (it != b.begin()){
            left_spike = *(it - 1);
        }
        if (it != b.end()){
            rs = *it;
        }
 
        int low = left_spike - pos;
        int high = rs - pos;
 
        int ds = INF;
 
        if (low < -k){
        }else{
            int idx_low = low + k;
            if (idx_low < 0) idx_low = 0;
            if (idx_low >= rsz) idx_low = rsz - 1;
            ds = min(ds,L[idx_low]);
        }
 
        if (high > k){
        }else{
            int idxh = high + k;
            if (idxh < 0) idxh = 0;
            if (idxh >= rsz) idxh = rsz - 1;
            ds = min(ds,R[idxh]);
        }
 
        if (ds <= k && ds >= 1){
            die_time[ds]++;
        }
    }
 
    int alive = n;
    go(i,1,k){
        alive -= die_time[i];
        cout << alive << " ";
    }
    cout << "
";
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int T;
    cin >> T;
    while (T--) O_o();
    return 0;
}