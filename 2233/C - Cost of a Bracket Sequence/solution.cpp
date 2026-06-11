#include <bits/stdc++.h>
using namespace std;
#define int long long
int n,k,T;
string s,S;
 
int calc(string t){
    int sz = t.size() - 1;
    vector<int> pre(n + 1,0),suf(n + 2,0);
    for(int i=1;i<=sz;i++){
        pre[i] = pre[i - 1] + (t[i] == '(');
    }
    for(int i=sz;i>=1;i--){
        suf[i] = suf[i + 1] + (t[i] == ')');
    }
    int res = 1e18;
    for(int i=1;i<=sz;i++){
        res = min(pre[i] + suf[i + 1],res);
    }
    return res;
}
 
void O_o(){
    cin >> n >> k >> S;
    S = '#' + S;
    int ans = 1e18;
    string anss = "";
    for(int i=0;i<=k;i++){
        string s = S;
        int j = k - i,cnt1 = 0,cnt2 = 0;
        for(int yz1=1;yz1<=n && cnt1 < i;yz1++){
            if(s[yz1] == '('){
                cnt1++;
                s[yz1] = '1';
            }
        }
        for(int yz2=n;yz2>=1 && cnt2 < j;yz2--){
            if(s[yz2] == ')'){
                cnt2++;
                s[yz2] = '1';
            }
        }
        int tot = calc(s);
        if(tot < ans){
            ans = tot;
            anss = s;
        }
    }
    for(int i=1;i<=n;i++){
        if(anss[i] == '1'){
            cout << 1;
        }else{
            cout << 0;
        }
    }
    cout << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> T;
    while(T--)O_o();
    return 0;
}