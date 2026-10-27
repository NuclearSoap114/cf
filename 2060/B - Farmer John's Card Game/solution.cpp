#include <bits/stdc++.h>
using namespace std;
#define int long long 
 
void O_o(){
    int n,m;cin >> n >> m;
    int f = 0;
    int b[2010] = {0};
    for(int i=0;i<n;i++){
        vector<int> a(m);
        for(int j=0;j<m;j++){
            cin >> a[j];
            b[a[j]] = i;
        }
        sort(a.begin(),a.end());
        for(int j=1;j<m;j++){
            if(a[j] - a[j-1] != n){
                f = 1;
                break;
            }
        }
    }
    if(f){
        cout << -1 << '
';
        return ;
    }
    for(int i=0;i<n;i++){
        cout << b[i] + 1 << ' ';
    }
    cout << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
 
    int T;cin >> T;
    while(T--)O_o();
    return 0;
}