#include <bits/stdc++.h>
using namespace std;
#define int long long
int T,n;
string a,b,c;
int aa,bb,cc;
 
void O_o(){
    aa = bb = cc = 0;
    cin >> n >> a >> b >> c;
    for(char ch : a) aa += ch == '0';
    for(char ch : b) bb += ch == '0';
    for(char ch : c) cc += ch == '0';
 
    string s1,s2;
 
    bool op;
 
    if((aa >= n) + (bb >= n) + (cc >= n) >= 2){
        s1 = aa >= n ? a : b;
        s2 = s1 == a ? (bb >= n ? b : c) : c;
        op = 0;
    }else{
        s1 = aa < n ? a : b;
        s2 = s1 == a ? (bb < n ? b : c) : c;
        op = 1;
    }
 
    if(op){
        for(char &ch : s1){
            ch = ch == '0' ? '1' : '0';
        }
        for(char &ch : s2){
            ch = ch == '0' ? '1' : '0';
        }
    }
 
    // cout << s1 << ' ' << s2 << '
';
 
    int i = 1,j = 1;
 
    s1 = '#' + s1;
    s2 = '&' + s2;
 
    string ans = "";
 
    while(i <= (n << 1) && j <= (n << 1)){
        if(s1[i] == s2[j]){
            ans += s1[i];
            i++;
            j++;
        }else if(s1[i] == '1'){
            ans += '1';
            i++;
        }else{
            ans += '1';
            j++;
        }
    }
 
    while(i <= (n << 1)){
        ans += s1[i++];
    }
 
    while(j <= (n << 1)){
        ans += s2[j++];
    }
 
    if(op){
        for(char &ch : ans){
            ch = ch == '1' ? '0' : '1';
        }
    }
 
    cout << ans << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> T;
    while(T--)O_o();
    return 0;
}