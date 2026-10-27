#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void O_o(){
    int n;cin >> n;
    string s;cin >> s;
    s = '#' + s;
    int cur = 0,sum = 0;
    for(int i=1;i<=n;i++){
        if(s[i] == '0'){
            cur++;
            sum = max(sum,cur);
        }else{
            cur = 0;
        }
    }
    int st = 0,ed = 0;
    for(int i=1;i<=n;i++){
        if(s[i] == '0'){
            st++;
        }else{
            break;
        }
    }
    for(int i=n;i>=1;i--){
        if(s[i] == '0'){
            ed++;
        }else{
            break;
        }
    }
    sum = max(sum,st + ed);
    cout << sum << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    int T;cin >> T;
    while(T--)O_o();
    return 0;
}