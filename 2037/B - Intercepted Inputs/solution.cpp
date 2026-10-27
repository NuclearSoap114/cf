#include <bits/stdc++.h>
using namespace std;
#define int long long 
 
void O_o(){
    int n;cin >> n;
    int nn = n - 2;
    int ans = 1;
    multiset<int> st;
    for(int i=0;i<n;i++){
        int tmp;cin >> tmp;
        if(nn % tmp == 0 && st.find(nn / tmp) != st.end()){
            ans = tmp;
        }
        if(tmp < nn && nn % tmp == 0){
            st.insert(tmp);
        }
    }
    cout << ans << ' ' << nn / ans << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
 
    int T;cin >> T;
    while(T--)O_o();
    return 0;   
}