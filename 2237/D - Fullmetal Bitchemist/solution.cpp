#include <bits/stdc++.h>
using namespace std;
#define int long long 
int T,n;
string s;
 
void O_o(){
    cin >> n >> s;
    s = '#' + s;
    vector<int> pre(n + 1,0),pre0(n + 1,0),pre1(n + 1,0),pre2(n + 1,0);
    pre0[0] = 1;
    for(int i=1;i<=n;i++){
        pre[i] = ((pre[i - 1] + (s[i] == '1' ? 1 : -1) % 3) + 3) % 3;
    }
    for(int i=1;i<=n;i++){
        pre0[i] = pre0[i - 1] + (pre[i] == 0);
        pre1[i] = pre1[i - 1] + (pre[i] == 1);
        pre2[i] = pre2[i - 1] + (pre[i] == 2);
    }
    //0 0 1 0 -> 3
    //1 2 2 3
    //1 + 2
    //1 2 3 4 5
    int tot = (n + 1) * n / 2;
    int seg0 = 0;
    for(int i=1;i<=n;i++){
        if(pre[i] == 0)seg0 += pre0[i - 1];
        if(pre[i] == 1)seg0 += pre1[i - 1];
        if(pre[i] == 2)seg0 += pre2[i - 1];
    }
    int cur = 1,dec = 0;
    for(int i=2;i<=n;i++){
        if(s[i] != s[i - 1]){
            cur++;
        }else{
            cur = 1;
        }
        dec += (cur - 1) / 2;
    }
    cout << tot - seg0 - dec << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> T;
    while(T--)O_o();
    return 0;
}