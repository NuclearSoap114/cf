#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define int long long
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    for(int test = 0; test < t; test++){
        int n;
        cin >> n;
        vector<int> a(n + 1), b(n + 1);
        for(int i = 1; i <= n; i++) cin >> a[i];
        for(int i = 1; i <= n; i++) cin >> b[i];
        bool ok = true;
        if(a[n] != b[n]) ok = false;
        for(int i = 1; i < n && ok; i++){
            int del = a[i] ^ b[i];
            if(del == 0) continue;
            bool match = false;
            if(del == b[i + 1]) match = true;
            else if(del == a[i + 1] &&(a[i + 1] ^ b[i + 1]) != 0) match = true;
            if(!match) ok = false;
        }
        cout << (ok ? "YES" : "NO") << '
';
    }
    return 0;
}