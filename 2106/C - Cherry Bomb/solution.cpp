#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void O_o(){
    int n,k;cin >> n >> k;
    vector<int> a(n,0),b(n,0);
    int minn = INT_MAX;
    int maxn = -1;
    for(int i=0;i<n;i++){
        cin >> a[i];
        minn = min(a[i],minn);
        maxn = max(a[i],maxn);
    }
    int cnt = 0;
    set<int> st;
    int pos = -1;
    for(int i=0;i<n;i++){
        cin >> b[i];
        if(b[i] == -1)cnt++;
        else{
            pos = i;
            st.insert(b[i] + a[i]);
        }
    }
    if(cnt != n){
        if(st.size() > 1){
            cout << 0 << '
';
            return ;
        }
        
        int sum = a[pos] + b[pos];
        for(int i=0;i<n;i++){
            int num = sum - a[i];
            if(num > k || num < 0){
                cout << 0 << '
';
                return ;
            }
        }
        cout << 1 << '
';
    }else{
        cout << k + minn - maxn + 1<< '
';
    }
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
 
    int T;cin >> T;
    while(T--)O_o();
    return 0;
}