#include <bits/stdc++.h>
using namespace std;
const int MAXN = 2e5 + 10;
int T,n,a[MAXN],ans;
void O_o(){
    ans = 0;
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    set<int> st,cur;
    for(int i=1;i<=n;i++){
        st.insert(a[i]);
        cur.insert(a[i]);
        if(st.size() == cur.size()){
            ans++;
            cur.clear();
        }
    }
    cout << ans << '
';
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    cin >> T;
    while(T--)O_o();
    return 0;
}