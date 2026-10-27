#include <bits/stdc++.h>
using namespace std;
#define int long long
int T;
string s,t;
map<char,int> ss,tt;
 
void O_o(){
    cin >> s >> t;
    ss.clear(),tt.clear();
    for(char c : s){
        ss[c]++;
    }
    for(char c : t){
        tt[c]++;
    }
    for(char c : s){
        if(tt[c] < ss[c]){
            cout << "Impossible" << '
';
            return ;
        }
    }
 
    if(s.size() == 0){
        sort(t.begin(),t.end());
        cout << t << '
';
        return ;
    }
 
    string new_t = "";
    for(auto it : tt){
        char c = it.first;
        int cnt = it.second;
        if(cnt){
            int cnt_s = ss[c];
            for(int i=0;i<cnt - cnt_s;i++){
                new_t += c;
            }
        }
    }
    // sort(new_t.begin(),new_t.end());
    string ans = "";
    int ps = 0,pt = 0;
    int len_s = s.size(),len_t = new_t.size();
    t = new_t;
    while(1){
        if(pt < len_t && ps < len_s && new_t[pt] < s[ps]){
            ans += t[pt];
            pt++;
        }else{
            if(ps < len_s){ // 防止ps越界
                ans += s[ps];
                ps++;
            }else{
                break;
            }
        }
 
        if(pt >= len_t){
            for(int i=ps;i<len_s;i++){
                ans += s[i];
            }
            break;
        }else if(ps >= len_s){
            for(int i=pt;i<len_t;i++){
                ans += t[i];
            }
            break;
        }
    }
    cout << ans << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    cin >> T;
    while(T--)O_o();
    return 0;
}