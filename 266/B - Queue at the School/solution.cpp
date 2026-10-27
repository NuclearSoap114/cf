#include <iostream>
#include <queue>
// #include <bits/stdc++.h>
using namespace std;
#define int long long
 
void AC(){
    queue<int> q;
    int n,t;cin >> n >> t;
    string s;cin >> s;
    for(int i=0;i<t;i++){
        for(int j=0;j<n-1;j++){
            if(s[j] == 'B' && s[j+1] == 'G'){
                q.push(j);
            }
        }
        while(!q.empty()){
        swap(s[q.front()],s[q.front()+1]);
        q.pop();
        }
    }
    
    cout << s << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int T = 1;
    while(T--)AC();
    return 0;
}