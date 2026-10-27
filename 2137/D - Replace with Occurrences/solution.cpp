#include <bits/stdc++.h>
using namespace std;
#define int long long
#define go(i,a,b) for(int i=a;i<=b;i++)
#define og(i,a,b) for(int i=b;i>=a;i--)
#define all() a.begin() + 1,a.begin() + n + 1
int T,n;
 
void O_o(){
    cin >> n;
    vector<int> a(n + 1),c(n + 1,0),p(n + 1,0),v(n + 1,0);
    for(int i=1;i<=n;i++){
        cin >> a[i];
        c[a[i]]++;
    }
    for(int i=1;i<=n;i++){
        if(c[i] % i != 0 && c[i]){
            cout << -1 << '
';
            return ;
        }
    }
    int cur = 1;
    for(int i=1;i<=n;i++){
        int x = a[i];
        if(p[x] % x == 0){
            v[x] = cur;
            cur++;
        }
        cout << v[x] << ' ';
        p[x]++;
    }
    cout << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    cin >> T;
    while(T--)O_o();
}