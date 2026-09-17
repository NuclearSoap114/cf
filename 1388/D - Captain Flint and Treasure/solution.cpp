#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 2e5 + 10;
int n,a[N],b[N],indeg[N];
vector<int> G[N];
 
void O_o(){
    int ans = 0;
    cin >> n;
    for(int i = 1;i <= n;i++){
        cin >> a[i];
    }
 
    for(int i = 1;i <= n;i++){
        cin >> b[i];
    }
 
    for(int i = 1;i <= n;i++){
        if(b[i] != -1){
            G[i].push_back(b[i]);
            indeg[b[i]]++;
        }
    }
 
    queue<int> q;
 
    for(int i = 1;i <= n;i++){
        if(indeg[i] == 0){
            q.push(i);
        }
    }
 
    vector<int> p,neg;
 
    while(!q.empty()){
        int u = q.front();
        q.pop();
 
        ans += a[u];
 
        if(a[u] >= 0){
            p.push_back(u);
            if(b[u] != -1){
                a[b[u]] += a[u];
            }
        }else{
            neg.push_back(u);
        }
 
        for(auto v : G[u]){
            indeg[v]--;
            if(indeg[v] <= 0){
                q.push(v);
            }
        }
    }
 
    cout << ans << '
';
 
    for(int u : p){
        cout << u << ' ';
    }
 
    reverse(neg.begin(),neg.end());
 
    for(int u : neg){
        cout << u << ' ';
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