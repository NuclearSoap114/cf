#include <bits/stdc++.h>
using namespace std;
#define int long long 
 
void O_o(){
    int n;cin >> n;
    vector<int> s(n);
    int cnt0=0,sum=0;
    for(int i=0;i<n;i++){
        cin >> s[i];
        if(s[i]==0)cnt0++;
        else sum += s[i];
    }
    sum+=cnt0;
    cout<<sum<<"
";
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
 
    int T;cin  >>  T;
    while(T--)O_o();
    return 0;
}