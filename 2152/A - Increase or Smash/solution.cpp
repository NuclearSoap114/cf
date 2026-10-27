#include <bits/stdc++.h>
using namespace std;
#define int long long 
 
void O_o(){
    int n;cin >> n;
    set<int> s;
    for(int i = 0;i < n;i++){
        int x;cin >> x;
        s.insert(x);
    }
    int m = (int)s.size();
    cout << 2 * m - 1 << "
";
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
 
    int T;cin >> T;
    while(T--)O_o();
    return 0;
}