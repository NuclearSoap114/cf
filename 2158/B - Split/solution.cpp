#include <bits/stdc++.h>
using namespace std;
#define int long long
int T,n,ans;
 
void O_o(){
    cin >> n;
    vector<int> a(n * 2);
    for(int i=0;i<n * 2;i++){
        cin >> a[i];
    }    
 
    vector<int> cnt(n * 2 + 1,0);
    for(int i : a){
        cnt[i]++;
    }
    int x,y,z;
    x = y = z = 0;
 
    for(int i=1;i<=2 * n;i++){
        int num = cnt[i];
        if(num == 0)continue; 
        if(num & 1) x++;
        else if(num % 4) y++;
        else z++;
    }
    ans = x + 2 * y + 2 * z;
    if((z & 1) && x == 0){
        ans -= 2;
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