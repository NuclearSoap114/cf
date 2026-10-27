#include <bits/stdc++.h>
using namespace std;
#define int long long 
string s;
 
void opera(int l,int r){
    char rr = s[r];
    s.erase(r,1);
    s.insert(l,1,rr - (r - l));
}
 
void O_o(){
    cin >> s;
    int n = s.length();
    for(int i=0;i<n - 1;i++){
        char maxn = s[i];
        int maxj = i;
        for(int j=i+1;j<=i+9 && j<n;j++){
            if(s[j] - (j - i) > maxn){
                maxn = s[j] - (j - i);
                maxj = j;
            }
        }
        opera(i,maxj);
    }
    cout << s << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
 
    int T;cin >> T;
    while(T--)O_o();
    return 0;
}