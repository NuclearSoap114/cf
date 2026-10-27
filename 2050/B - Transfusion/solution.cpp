#include <bits/stdc++.h>
using namespace std;
#define int long long 
 
void O_o(){
    int n;cin >> n;
    int sum = 0;
    vector<int> a(n);
    for(auto &x : a){
        cin >> x;
        sum += x;
    }
    int average = sum / n;
    if(average * n != sum){
        cout << "NO" << '
';
        return ;
    } 
 
    for(int i=1;i<n-1;i++){
        if(a[i-1] == average) continue;
        if(a[i-1] < average){
            int diff = average - a[i-1];
            a[i+1] -= diff;
            a[i-1] += diff;
        }else{
            int diff = a[i-1] - average;
            a[i+1] += diff;
            a[i-1] -= diff;
        }
    }
 
    if(a[n-1] == a[n-2] && a[n-1] == average){
        cout << "YES" << '
';
    }else{
        cout << "NO" << '
';
    }
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
 
    int T;cin >> T;
    while(T--)O_o();
    return 0;
}