#include <bits/stdc++.h>
using namespace std;
#define int long long
int T,n;
 
void O_o(){
    cin >> n;
    vector<char> a(n + 1),b;
    for(int i = 1;i <= n;i++){
        cin >> a[i];
        if(i == 1)b.push_back(a[i]);
        else if(a[i] != b.back())b.push_back(a[i]);
    }
 
    int cur = 1;
    int ok = 0;
    int ok2 = 0;
 
    for(int i = 2;i <= n - 1;i++){
        if(a[i] != a[i - 1] && a[i] != a[i + 1])ok = 1;
        if(a[i - 1] == a[i + 1] && a[i] != a[i - 1])ok2 = 2;
    }
 
    // cout << ok << '
';
 
    cout << b.size() - max(ok,ok2) << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> T;
    while(T--)O_o();
    return 0;
}