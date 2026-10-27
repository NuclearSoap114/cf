#include <bits/stdc++.h>
using namespace std;
#define int long long
#define go(i,a,b) for(int i=a;i<=b;i++)
#define og(i,a,b) for(int i=b;i>=a;i--)
int T,n,l,r;
 
void O_o(){
    cin >> n;
    int sz = n;
    vector<int> a(n + 1);
    int pos = -1;
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    for(int i=1;i<=n;i++){
        if(a[i] != sz){
            pos = i;
            break;
        }
        sz--;
    }
    if(pos == -1){
        for(int i=1;i<=n;i++)cout << a[i] << ' ';
        cout << '
';
        return ;
    }
    l = pos;
    for(int i=1;i<=n;i++){
        if(a[i] == sz){
            r = i;
        }
    }
    vector<int> ans;
    for(int i=1;i<l;i++)ans.emplace_back(a[i]);
    for(int i=r;i>=l;i--)ans.emplace_back(a[i]);
    for(int i=r+1;i<=n;i++)ans.emplace_back(a[i]);
    for(auto &x : ans)cout << x << ' ';
    cout << '
';
}   
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    cin >> T;
    while(T--)O_o();
}