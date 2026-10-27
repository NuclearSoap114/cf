#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define int long long
 
bool cmp(int a,int b){
    return a > b;
}
 
void deal(){
    int n,j,k;cin >> n >> j >> k;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int jj = a[j - 1];
    sort(a.begin(),a.end(),cmp);
    a.erase(a.begin() + 1,a.begin() + 1 + (n - k));
    if(jj >= a[k - 1]){
        cout << "YES" << '
';
    }else{
        cout << "NO" << '
';
    }
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
 
    int T;cin >> T;
    while(T--)deal();
    return 0;
}