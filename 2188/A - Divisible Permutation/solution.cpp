#include <bits/stdc++.h>
using namespace std;
#define int long long
#define go(i,a,b) for(int i=a;i<=b;i++)
#define og(i,a,b) for(int i=b;i>=a;i--)
int T,n;
 
void O_o(){
    cin >> n;
    int nn = n;
    if(n % 2 == 0){
        n++;
    }
    vector<int> a;
    for(int i=n;i>n/2;i--){
        a.emplace_back(i);
        a.emplace_back(n - i + 1);
    }
    reverse(a.begin(),a.end());
    if(nn % 2 == 0){
        for(int i=1;i<=n-1;i++){
            cout << a[i] << ' ';
        }
        cout << '
';
        return ;
    }
    for(int i=1;i<=n;i++){
        cout << a[i] << ' ';
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