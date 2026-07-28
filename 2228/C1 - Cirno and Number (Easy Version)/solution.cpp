#include <bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i,l,r) for(int i=(l);i<=(r);i++)
const int inf = 1e18,N = 2e5 + 10;
int T,n;
 
bool getup(int p,bool big,const string& s,const vector<int>& d,string& res){
    if(p == s.size())return true;
 
    int cur = s[p] - '0';
 
    for(int x:d){
        if(p == 0 && s.size() > 1 && x == 0)continue;
        if(!big && x < cur)continue;
 
        res.push_back(char('0' + x));
 
        if(getup(p + 1,big || x > cur,s,d,res))return true;
 
        res.pop_back();
    }
 
    return false;
}
 
bool getdown(int p,bool small,const string& s,const vector<int>& d,string& res){
    if(p == s.size())return true;
 
    int cur = s[p] - '0';
 
    for(int i=d.size() - 1;i>=0;i--){
        int x = d[i];
 
        if(p == 0 && s.size() > 1 && x == 0)continue;
        if(!small && x > cur)continue;
 
        res.push_back(char('0' + x));
 
        if(getdown(p + 1,small || x < cur,s,d,res))return true;
 
        res.pop_back();
    }
 
    return false;
}
 
__int128 getnum(const string& s){
    __int128 res = 0;
 
    for(char c:s){
        res = res * 10 + c - '0';
    }
 
    return res;
}
 
void print(__int128 x){
    if(x == 0){
        cout << 0 << '
';
        return;
    }
 
    string s;
 
    while(x){
        s.push_back(char('0' + x % 10));
        x /= 10;
    }
 
    reverse(s.begin(),s.end());
 
    cout << s << '
';
}
 
void O_o(){
    int a;
    cin >> a >> n;
 
    vector<int> d(n);
 
    rep(i,0,n - 1){
        cin >> d[i];
    }
 
    string s = to_string(a);
 
    string up;
    string down;
 
    if(!getup(0,false,s,d,up)){
        int first = -1;
 
        for(int x:d){
            if(x != 0){
                first = x;
                break;
            }
        }
 
        if(first != -1){
            up.push_back(char('0' + first));
 
            rep(i,1,s.size()){
                up.push_back(char('0' + d[0]));
            }
        }
    }
 
    if(!getdown(0,false,s,d,down)){
        if(s.size() > 1){
            down = string(s.size() - 1,char('0' + d.back()));
        }
    }
 
    __int128 A = a;
    __int128 ans = (__int128)1 << 120;
 
    if(!up.empty()){
        ans = min(ans,getnum(up) - A);
    }
 
    if(!down.empty()){
        ans = min(ans,A - getnum(down));
    }
 
    print(ans);
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    cin >> T;
 
    while(T--)O_o();
 
    return 0;
}