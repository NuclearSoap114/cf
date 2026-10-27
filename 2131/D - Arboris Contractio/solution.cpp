#include <bits/stdc++.h>
#include <iostream>
 
using namespace std;
#define int long long
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    
    int t;
    cin >> t;
    for(int O_o = 0; O_o < t; O_o++){
        int n;
        cin >> n;
        vector<vector<int>> adj(n + 1);
        vector<int> deg(n + 1,0);
        for(int i = 0; i < n - 1; i++){
            int u,v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
            deg[u]++;
            deg[v]++;
        }
        int L = 0;
        for(int i = 1; i <= n; i++){
            if(deg[i] == 1) L++;
        }
        int maxv = 0;
        for(int i = 1; i <= n; i++){
            int cnt = 0;
            for(int j : adj[i]){
                if(deg[j] == 1) cnt++;
            }
            int extra =(deg[i] == 1 ? 1 : 0);
            maxv = max(maxv,cnt + extra);
        }
        cout << L - maxv << '
';
    }
    return 0;
}