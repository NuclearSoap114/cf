#include <bits/stdc++.h>
using namespace std;
#define int long long
int T,n;
void O_o(){
    cin >> n;
    vector<int> x(n),y(n);
    multiset<int> mx,my;
    for(int i=0;i<n;i++){
        cin >> x[i] >> y[i];
        mx.insert(x[i]);
        my.insert(y[i]);
    }
    if(n == 1){
        cout << 1 << '
';
        return ;
    }
    int ans = LLONG_MAX;
    for(int i=0;i<n;i++){
        mx.erase(mx.find(x[i]));
        my.erase(my.find(y[i]));
 
        int lx = *mx.begin(),rx = *mx.rbegin();
        int ly = *my.begin(),ry = *my.rbegin();
        int area = (rx - lx + 1) * (ry - ly + 1);
 
        if(area == n - 1){
            int ex = (rx - lx + 2) * (ry - ly + 1);
            int ey = (rx - lx + 1) * (ry - ly + 2);
            area = min(ex,ey);
        }
            
        ans = min(ans,area);
 
        mx.insert(x[i]);
        my.insert(y[i]);
    }
 
    cout << ans << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    cin >> T;
    while(T--)O_o();
    return 0;
}