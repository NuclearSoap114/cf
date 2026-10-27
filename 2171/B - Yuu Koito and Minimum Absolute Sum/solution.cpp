#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MAXN = 2e5 + 10;
int T,n,a[MAXN];
void O_o(){
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    if(a[1] == -1 && a[n] == -1){
        a[1] = 0;
        a[n] = 0;
    }else if(a[1] == -1){
        a[1] = a[n];
    }else if(a[n] == -1){
        a[n] = a[1];
    }
    cout << abs(a[n] - a[1]) << '
';
    for(int i=1;i<=n;i++){
        if(a[i] == -1) a[i] = 0;
        cout << a[i] << ' ';
    }
    cout << '
';
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    cin >> T;
    while(T--)O_o();
    return 0;
}