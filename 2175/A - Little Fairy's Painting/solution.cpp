#include <bits/stdc++.h>
using namespace std;
#define int long long
int T,n;
 
void O_o(){
    cin >> n;
    vector<int> a(n + 1);
    set<int> st;
    for(int i=1;i<=n;i++){
        cin >> a[i];
        st.insert(a[i]);
    }
    int sz = st.size();
    sort(a.begin() + 1,a.end());
    for(int i=1;i<=n;i++){
        if(a[i] >= sz){
            cout << a[i] << '
';
            return ;
        }
    }
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    cin >> T;
    while(T--)O_o();
    return 0;
}