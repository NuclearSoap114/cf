#include <iostream>
//#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MAXN = 1e5 + 10;
 
int T;
int a[MAXN],b[MAXN];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
 
    cin >> T;
    while(T--){
        int n;cin >> n;
        for(int i=0;i<n;i++)cin >> a[i];
        for(int i=0;i<n;i++)cin >> b[i];
        int cnta = 0;
        for(int i=0;i<n-1;i++){
            if(i==n-1){
                cnta+=a[i]; 
                break;
            } 
            if(a[i] > b[i+1]) cnta+=(a[i]-b[i+1]);
        }
        cnta += a[n-1];
        cout << cnta << '
';
    }
    return 0;
}