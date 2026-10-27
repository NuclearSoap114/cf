#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAXN = 2e5 + 10;
int T,n,a[MAXN];
void O_o(){
    cin >> n;
    for(int i=1;i<=n;i++)cin >> a[i];
    sort(a + 1,a + n + 1);
    for(int i=2;i<=n-1;i+=2){
        if(a[i] != a[i+1]){
            cout << "NO" << '
';
            return ;
        }
    }
    cout << "Yes" << '
';
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    cin >> T;
    while(T--)O_o();
    return 0;
}