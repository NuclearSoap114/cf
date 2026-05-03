#include <bits/stdc++.h>
using namespace std;
int T,n;
 
void O_o(){
    cin >> n;
    vector<int> a(n + 1);
    vector<int> b,c,d,e;
    for(int i=1;i<=n;i++){
        cin >> a[i];
        if(a[i] % 6 == 0)b.push_back(a[i]);
        else if(a[i] % 2 == 0)c.push_back(a[i]);
        else if(a[i] % 3 == 0)d.push_back(a[i]);
        else e.push_back(a[i]);
    }
    for(int x : b){
        cout << x << ' ';
    }
    for(int x : c){
        cout << x << ' ';
    }
    for(int x : e){
        cout << x << ' ';
    }
    for(int x : d){
        cout << x << ' ';
    }
    cout << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> T;
    while(T--)O_o();
    return 0;
}