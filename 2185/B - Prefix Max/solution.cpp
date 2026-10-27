#include <bits/stdc++.h>
using namespace std;
#define int long long
#define go(i,a,b) for(int i=a;i<=b;i++)
#define og(i,a,b) for(int i=b;i>=a;i--)
int T,n;
 
void O_o(){
    cin >> n;
    vector<int> a(n + 1);
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    cout << *max_element(a.begin() + 1,a.begin() + n + 1) * n << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    cin >> T;
    while(T--)O_o();
}