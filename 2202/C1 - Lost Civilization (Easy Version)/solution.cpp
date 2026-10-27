#include <bits/stdc++.h>
using namespace std;
#define int long long
int n,T;
 
void O_o(){
    cin >> n;
    vector<int> a(n + 1);
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    stack<int> st;
    for(int i=n;i>=1;i--){
        if(st.empty()){
            st.push(a[i]);
        }else{
            while(!st.empty() &&  a[i] + 1 == st.top()){
                st.pop();
            }
            st.push(a[i]);
        }
    }
    cout << st.size() << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> T;
    while(T--)O_o();
    return 0;
}