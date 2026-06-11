#include <bits/stdc++.h>
using namespace std;
#define int long long
int n,k,T;
int pos,l,r;
string S;
 
void calc(string t){
    int sz = t.size() - 1;
    vector<int> pre(sz + 1,0),suf(sz + 2,0);
    for(int i = 1;i <= sz;i++){
        pre[i] = pre[i - 1] + (t[i] == '(');
    }
    for(int i = sz;i >= 1;i--){
        suf[i] = suf[i + 1] + (t[i] == ')');
    }
    int res = 1e18;
    pos = 0;
    for(int i = 0;i <= sz;i++){
        if(pre[i] + suf[i + 1] < res){
            res = pre[i] + suf[i + 1];
            pos = i;
        }
    }
    l = pre[pos];
    r = suf[pos + 1];
}
 
void O_o(){
    cin >> n >> k >> S;
    S = '#' + S;
    calc(S);
    string ans(n + 1,'0');
    for(int i = 1;i <= pos && k > 0;i++){
        if(S[i] == '('){
            ans[i] = '1';
            k--;
        }
    }
    for(int i = n;i >= pos + 1 && k > 0;i--){
        if(S[i] == ')'){
            ans[i] = '1';
            k--;
        }
    }
    for(int i = 1;i <= n;i++){
        cout << ans[i];
    }
    cout << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    cin >> T;
    while(T--) O_o();
 
    return 0;
}