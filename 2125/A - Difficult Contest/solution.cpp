#include <bits/stdc++.h>
using namespace std;
#define int long long
#define all() a.begin(),a.end()
#define ii int i=0;i<n;i++
#define iii int i=1;i<=n;i++
 
void deal(){
    string s;cin >> s;
    int f = 0,t = 0;
    deque<char> dq;
 
    for(int i=0;i<s.length();i++){
        if(s[i] == 'F'){
            f++;
        }else if(s[i] == 'T'){
            t++;
        }else{
            dq.emplace_back(s[i]);
        }
    }
 
    for(int i=0;i<f;i++){
        dq.emplace_back('F');
    }
 
    for(int i=0;i<t;i++){
        dq.emplace_front('T');
    }
 
    while(!dq.empty()){
        cout << dq.front();
        dq.pop_front();
    }
    cout << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
 
    int _;cin >> _;
    while(_--)deal();
    return 0;
}