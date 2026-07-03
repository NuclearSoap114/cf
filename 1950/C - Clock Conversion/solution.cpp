#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 2e5 + 10,inf = 1e18;
int T,n;
 
void O_o(){
    string s;cin >> s;
    int h = 10 * (s[0] - '0') + (s[1] - '0');
    int m = 10 * (s[3] - '0') + (s[4] - '0');
    bool f = 0;
    if(h >= 12){
        f = 1;
    }
    if(f){
        h -= 12;
    }
    if(h == 0)h = 12;
    if(h < 10)cout << 0;cout << h << ':';
    if(m < 10)cout << 0;cout << m;
    cout << ' ';
    if(f){
        cout << "PM";
    }else{
        cout << "AM";
    }
    cout << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> T;
    while(T--)O_o();
}