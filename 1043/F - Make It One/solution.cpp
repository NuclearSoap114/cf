#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 3e5 + 10,inf = 1e18;
int n,a[N],cnt[N],roz[N],mx = -1;
 
int base(int x){
    int res = 1;
    while(x > 1){
        int p = roz[x];
        while(x % p == 0)x /= p;
        res *= p;
    }
    return res;
}
 
vector<int> get(int x){
    vector<int> v,res,vv;
    int p = x;
    while(p > 1){
        v.push_back(roz[p]);
        p /= roz[p];
    }
    int sz = v.size();
    int t = 1 << sz;
    for(int i=0;i<t;i++){
        int tmp = 1;
        for(int j=0;j<sz;j++){
            if((i >> j) & 1){
                tmp *= v[j];
            }
        }
        vv.push_back(tmp);
    }
    for(int i=0;i<t;i++){
        int ok = 0;
        for(int j=i;j<(1 << sz);j = (j + 1) | i){
            int tmp = cnt[vv[j]];
            if(__builtin_popcount(i ^ j) & 1)ok -= tmp;
            else ok += tmp;
        }
        if(ok)res.push_back(vv[i]);
    }
    return res;
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    for(int i=1;i<=n;i++){
        int x;cin >> x;
        a[x]++;
        mx = max(mx,x);
    }
    for(int i=1;i<=mx;i++){
        for(int j=i;j<=mx;j+=i){
            cnt[i] += a[j];
        }
    }
    for(int i=2;i<=N;i++){
        if(!roz[i])roz[i] = i;
        for(int j=i * 2;j<=N;j += i){
            if(!roz[j])roz[j] = i;
        }
    }
    queue<int> q;
    vector<int> dist(N,inf);
    vector<bool> vis(N,0);
    for(int i=1;i<=mx;i++){
        if(a[i]){
            int x = base(i);
            q.push(x);
            dist[x] = 1;
        }
    }
    while(!q.empty()){
        int u = q.front();
        q.pop();
        if(vis[u])continue;
        vis[u] = 1;
        if(u == 1){
            cout << dist[u] << '
';
            return 0;
        }
        for(int v : get(u)){
            if(dist[v] > dist[u] + 1){
                dist[v] = dist[u] + 1;
                q.push(v);
            }
        }
    }
    cout << -1 << '
';
    return 0;
}