#include <iostream>
#include <deque>
//#include <bits/stdc++.h>
using namespace std;
#define int long long
#define all() a.begin(),a.end()
#define ii int i=0;i<n;i++
#define iii int i=1;i<=n;i++
 
void deal(){
    int n;cin >> n;
    deque<int> dq;
    int m = 1;
    for(int i=n;i>=1;i--){
        if(m){
            dq.push_back(i);
        }else{
            dq.push_front(i);
        }
 
        m==0 ? m=1 : m=0;
    }
    while(!dq.empty()){
        cout << dq.front() << ' ';
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