#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(a) a.begin(),a.end()
const int MAXN = 2e5 + 10;
int T,a[MAXN],n,k,g,mxn;
void O_o(){
    cin >> n >> k;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
        mxn = max(mxn,a[i]);
    }
    sort(a.begin(),a.end());
    for(int g=mxn;g>=2;g--){//a[i] > 4g || a[i] % g == 0, otherwise use erase 
        int use = 0;
        use += lower_bound(all(a),4*g) - upper_bound(all(a),3*g);
        use += lower_bound(all(a),3*g) - upper_bound(all(a),2*g);
        use += lower_bound(all(a),2*g) - upper_bound(all(a),g);
        use += lower_bound(all(a),g) - a.begin();
        if(use <= k){
            cout << g << '
';
            return ;
        }
    }
    cout << 1 << '
';
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    cin >> T;
    while(T--)O_o();
    return 0;
}