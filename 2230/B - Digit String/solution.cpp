#include <bits/stdc++.h>
using namespace std;
string s;
 
void O_o(){
    cin >> s;
    int n = s.size();
    s = '#' + s;
    vector<int> suf(n + 2,0);
    for(int i=n;i>=0;i--){
        suf[i] = suf[i + 1] + (s[i] == '1' || s[i] == '3');
    }
    int pre = 0,mx = suf[0];
    for(int i=1;i<=n;i++){
        if(s[i] == '2')pre++;
        mx = max(mx,suf[i + 1] + pre);
    }
    cout << n - mx << '
';
}
 
int main(){
    int _;cin >> _;
    while(_--)O_o();
    return 0;
}