#include <bits/stdc++.h>
using namespace std;
#define rep(i,l,r) for(int i = (int)l;i <= (int)r;i++)
int T;
 
void O_o(){
    vector<int> a(4);
    rep(i,1,3)cin >> a[i];
    int ans = 0;
    while(a[1] != a[2] && a[2] != a[3] && a[3] != a[1]){
        sort(a.begin() + 1,a.begin() + 4);
        a[3]--;
        a[1]++;
        ans++;
    }
    cout << ans << '
';
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> T;
    while(T--)O_o();
    return 0;
}