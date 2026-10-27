#include <bits/stdc++.h>
using namespace std;
#define int long long
#define go(i,a,b) for(int i=a;i<=b;i++)
#define og(i,a,b) for(int i=b;i>=a;i--)
int T,n;
const int inf = 0x3f3f3f3f3f3f3f;
void O_o(){
    cin >> n;
    set<int> st;
    for(int i=1,tmp;i<=n;i++){
        cin >> tmp;
        st.insert(tmp);
    }
    int ans = -1,cur = 1;
    vector<int> b(1,inf);
    for(auto &x : st){
        b.emplace_back(x);
    }
    int len = b.size();
    sort(b.begin() + 1,b.begin() + len);
    for(int i=1;i<len;i++){
        if(b[i] - b[i - 1] == 1){
            cur++;
            ans = max(ans,cur);
        }else{
            cur = 1;
        }
    }
    if(ans < 1)ans = 1;
    cout << ans << '
';
    
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    cin >> T;
    while(T--)O_o();
}