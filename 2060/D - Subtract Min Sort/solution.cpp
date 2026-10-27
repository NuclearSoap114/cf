#include <bits/stdc++.h>
using namespace std;
#define int long long 
 
void O_o(){
    int n;cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=1;i<n;i++){
        int sub = min(a[i],a[i - 1]);
        a[i] -= sub;
        a[i - 1] -= sub;
    }
    bool f = 0;
    for(int i=0;i<n-1;i++){
        if(a[i] > a[i + 1]){
            f = 1;
            break;
        }
    }
    if(f){
        cout << "NO" << '
';
    }else{
        cout << "YES" << '
';
    }
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
 
    int T;cin >> T;
    while(T--)O_o();
    return 0;
}