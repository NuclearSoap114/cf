#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 2e5 + 10,inf = 1e18;
int T,n;
string a,b;
 
void O_o(){
    cin >> a >> b;
    int sumA = 0,sumB = 0;
    for(char c : a){
        sumA = (sumA + (c - '0')) % 10;
    }
    for(char c : b){
        sumB = (sumB + (c - '0')) % 10;
    }
    if(sumA != sumB){
        cout << -1 << '
';
        return ;
    }
    int lenA = a.size();
    int lenB = b.size();
    a = '#' + a;
    b = '#' + b;
    vector<int> pa(lenA + 1,0);
    vector<int> pb(lenB + 1,0);
    for(int i=1;i<=lenA;i++){
        pa[i] = (pa[i - 1] + (a[i] - '0')) % 10;
    }
    for(int i=1;i<=lenB;i++){
        pb[i] = (pb[i - 1] + (b[i] - '0')) % 10;
    }
    vector<vector<int>> dp(lenA + 1,vector<int>(lenB + 1,0));
    for(int i=1;i<=lenA;i++){
        for(int j=1;j<=lenB;j++){
            if(pa[i] == pb[j]){
                dp[i][j] = dp[i - 1][j - 1] + 1;
            }else{
                dp[i][j] = max(dp[i - 1][j],dp[i][j - 1]);
            }
        }
    }
    cout << dp[lenA][lenB] << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> T;
    while(T--)O_o();
}