#include <bits/stdc++.h>
using namespace std;
#define int long long
vector<int> ans;
int maxbit(int n){
    int cnt = 0;
    while(n){
        n >>= 1;
        cnt++;
    }
    return cnt;
}
void yz(){
    ans.clear();
    int a,b;cin >> a >> b;
    int aaa = a;
    int bbb = b;
    if(maxbit(a) < maxbit(b)){
        cout << -1 << '
';
        return ;
    }
    while((a >> 1)){
        int bit;
        int aa = a & 1;
        int bb = b & 1;
        bit = aa ^ bb;
        ans.emplace_back(bit);
        a >>= 1;
        b >>= 1;
    }
    int bit;
    int aa = a & 1;
    int bb = b & 1;
    bit = aa ^ bb;
    a >>= 1;
    b >>= 1;
    // reverse(ans.begin(),ans.end());
    int weight = 1;
    int anx = 0;
    for(auto &x : ans){
        if(x){
            anx += x * weight;
        }
        weight <<= 1;
    }
    cout << 2 << '
';
    cout << anx << ' ' << (bit * weight)<< '
';
//     cout << (anx ^ aaa) << ' ' << bbb << '
';
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    int T;cin >> T;
    while(T--)yz();
    return 0;
}
//0 1  0 0  1 0  1 1