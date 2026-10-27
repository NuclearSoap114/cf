#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    int t;cin>>t;
    while(t--){
        int n,a,b;cin >> n >> a >> b;
        if((n-b)%2!=0){
            cout << "NO
";
        }else{
            if(a<=b){
                cout << "YES
";
            }else{
                if((a-b)%2==0){
                    cout << "YES
";
                }else{
                    cout << "NO
";
                }
            }
        }
    }
    return 0;
}