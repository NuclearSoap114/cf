#include <iostream>
#include <algorithm>
using namespace std;
#define int long long
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
 
    int _;cin >> _;
    while(_--){
        int n,k;cin >> n >> k;
        int a[100010];
        for(int i=0;i<n;i++)cin >> a[i];
        int now = a[k - 1];
        sort(a,a + n);
        int pos = lower_bound(a,a+n,now) - a;
        int lava = 0;
        int f = 0;
        for(int i=pos+1;i<n;i++){
            if(a[i] - a[i-1] > a[i-1] - lava){
                f = 1;
                break;
            }
            lava += a[i] - a[i-1];
        }
        if(f){
        cout << "NO" << '
';
        }else{
            cout << "YES" << '
';
        }
    }
    return 0;
}