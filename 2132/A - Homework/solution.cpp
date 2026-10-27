#include <bits/stdc++.h>
using namespace std;
#define int long long 
 
void ACACAC(){
 
    int n;cin >> n;
    string a;cin >> a;
    int m;cin >> m;
    string b;cin >> b;
    string c;cin >> c;
    
    for(int i=0;i<m;i++){
        if(c[i] == 'V'){
            a = b[i] + a;
        }else{
            a = a + b[i];
        }
    }
    
    cout << a << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
 
    int T;cin  >>  T;
    while(T--)ACACAC();
    return 0;
}