#include <bits/stdc++.h>
#define int long long
using namespace std;
 
void O_o(int tc){
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int cnt0 = 0;
    int cnt1 = 0;
    for(char c : s){
        if(c == '0'){
            cnt0++;
        }else{
            cnt1++;
        }
    }
    int mn = max(cnt0, cnt1) - n / 2;
    int mx = cnt0 / 2 + cnt1 / 2;
    if(k >= mn &&(k - mn) % 2 == 0 && k <= mx){
        cout << "YES";
    }else{
        cout << "NO";
    }
}
 
signed main(){
    int t;cin >> t;
    for(int i = 1; i <= t; ++i){
        O_o(i);
        cout << "
";
    }
    return 0;
}