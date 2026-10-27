#include <bits/stdc++.h>
using namespace std;
#define int long long 
 
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
 
    int T;cin >> T;
    while(T--){
        int n;cin >> n;
    vector<int> v;
    int a[20];
    a[0]=1;
    for(int i=1;i<=18;i++){
        a[i]=a[i-1]*10;
    }
 
    for(int i=1;i<=18;i++){
        int d = 1 + a[i];
        if(n % d == 0){
            int x = n / d;
            if(x > 0) v.push_back(x);
        }
    }
 
    sort(v.begin(),v.end());
 
    if(v.empty()){
        cout << 0 << '
';
    }else{
        cout << v.size() << '
';
 
        for(int i=0;i<v.size();i++){
            cout << v[i];
            if(i < v.size()-1){
                cout<<' ';
            }else cout << '
';
        }
    }
    }
    return 0;
}