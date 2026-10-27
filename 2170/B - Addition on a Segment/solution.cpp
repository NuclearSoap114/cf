#include <bits/stdc++.h>
using namespace std;
#define int long long
// const int MAXN = 2e5 + 10;
int T,n,sum,cnt;
vector<int> a;
 
void O_o(){
    cin >> n;
    a.resize(n);
    sum = cnt = 0;
    for(auto &x : a){
        cin >> x;
        if(x > 0){
            sum += x - 1;
            cnt++;
        }
    }
    if(sum > n - 1){
        cout << cnt << '
';
        return ;
    }
    cout << cnt - (n - 1 - sum) << '
';
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    cin >> T;
    while(T--)O_o();
    return 0;
}