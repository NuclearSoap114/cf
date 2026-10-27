#include <bits/stdc++.h>
using namespace std;
#define int long long
#define go(i,a,b) for(int i=a;i<=b;i++)
#define og(i,a,b) for(int i=b;i>=a;i--)
int T,n,s,x,sum;
 
void O_o(){
    bool ok = 0;
    sum = 0;
    cin >> n >> s >> x;
    for(int i=1,tmp;i<=n;i++){
        cin >> tmp;
        sum += tmp;
    }
    int shen = s - sum;
    if(shen >= 0 && shen % x == 0)ok = 1;
    if(ok){
        cout << "YES" << '
';
    }else{
        cout << "NO" << '
';
    }
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    cin >> T;
    while(T--)O_o();
}