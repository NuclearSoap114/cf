#include <bits/stdc++.h>
using namespace std;
#define int long long
int T,n;
 
void O_o(){
    cin >> n;
    stack<int> st;
    for(int i=1;i<=n;i++){
        int x;cin >> x;
        if(st.empty() || st.top() <= x){
            st.push(x);
        }else{
            int t = st.top();
            st.pop();
            st.push(t + x);
        }
    }
    vector<int> a;
    while(!st.empty()){
        a.push_back(st.top());
        st.pop();
    }
    cout << *max_element(a.begin(),a.end()) << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> T;
    while(T--)O_o();
    return 0;
}