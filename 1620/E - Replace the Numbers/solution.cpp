#include <bits/stdc++.h>
using namespace std;
#define int long long
int op,x,y,n;
 
struct q{
    int op,x,y;
};
 
void O_o(){
    cin >> n;
    vector<q> a(n + 1);
    for(int i = 1;i <= n;i++){
        cin >> op >> x;
        if(op - 1)cin >> y;
        a[i] = {op,x,y};
    }
    vector<int> ans,f(5e5 + 10,0);
    iota(f.begin() + 1,f.begin() + 5e5 + 1,1);
    for(int i = n;i >= 1;i--){
        if(a[i].op == 1){
            ans.push_back(f[a[i].x]);
        }else{
            f[a[i].x] = f[a[i].y];
        }
    }
    for(int i = ans.size() - 1;i >= 0;i--){
        cout << ans[i] << ' ';
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