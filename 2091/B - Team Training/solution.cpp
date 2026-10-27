#include <bits/stdc++.h>
using namespace std;
#define int long long
#define all() a.begin(),a.end()
#define ii int i=0;i<n;i++
#define iii int i=1;i<=n;i++
 
bool cmp(int a,int b){
    return a > b;
}
 
void deal(){
    int n,x;cin >> n >> x;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    sort(all(),cmp);
    int ans = 0;
    int members = 1;
    for(int i=0;i<n;i++){
        if(a[i] * (members) >= x){
            ans++;
            members = 0;
        }
        members++;
    }
    cout << ans << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
 
    int _;cin >> _;
    while(_--)deal();
    return 0;
}