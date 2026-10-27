#include <bits/stdc++.h>
using namespace std;
#define int long long 
 
int a[25];
 
void init(){
    a[0]=1;
    for(int i=1;i<25;i++)a[i]=a[i-1]*3;
}
 
void O_o(){
    int n;cin >> n;
    int m = n;
    vector<int> d;
 
    while(m > 0){
        d.push_back(m%3);
        m /= 3;
    }
 
    int len = d.size();
 
    int r = 0;
 
    for(int i=0;i<len;i++){
        int val = d[i];
        if(!val) continue;
        int c;
        if(i == 0){
            c = 3;
        }else{
            c = a[i+1] + i * a[i-1];
        }
        r += val * c;
    }
    cout << r << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
 
    init();
    int T;cin >> T;
    while(T--)O_o();
    return 0;
}