#include <bits/stdc++.h>
using namespace std;
#define int long long
#define go(i,a,b) for(int i=a;i<=b;i++)
#define og(i,a,b) for(int i=b;i>=a;i--)
int T,n;
string s;
 
void O_o(){
    cin >> n >> s;
    int cnt1 = 0;
    for(char c : s) cnt1 += (c == '1');
    
    if(cnt1 == 0){
        cout << "0
";
        return;
    }
    
    if(cnt1 % 2 == 1 && n % 2 == 1){
        cout << "-1
";
        return;
    }
    
    if((n - cnt1) % 2 == 1){
        cout << n - cnt1 << "
";
        for(int i = 0; i < n; i++){
            if(s[i] == '0') cout << i + 1 << ' ';
        }
        cout << "
";
    } else {
        cout << cnt1 << "
";
        for(int i = 0; i < n; i++){
            if(s[i] == '1') cout << i + 1 << ' ';
        }
        cout << "
";
    }
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    cin >> T;
    while(T--) O_o();
}