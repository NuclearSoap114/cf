#include <bits/stdc++.h>
using namespace std;
#define int long long 
 
void O_o(){
    int n,k;
    cin >> n >> k;
    // vector<int> has(n+2,0);
    map<int,int> has;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        has[x]++;
    }
    int mis = 0;
    for(int i=0;i<k;i++){
        if(has[i] == 0)mis++;
    }
    int cntk = has[k];
    int ans = max(mis,cntk);
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