#include <bits/stdc++.h>
using namespace std;
#define int long long
inline void fmx(int &a,int b){ if(a<b) a=b;}
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define _rep(i,a,b) for(int i=b;i>=a;i--)
#define all() a.begin() + 1,a.begin() + n + 1
const int inf = 1e18;
int T,n;
 
void O_o(){
    cin >> n;
    vector<int> a(n + 1);
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    // a[i] == shu || a[i] > 2 * shu
    auto ck = [&](int mex) -> bool {
        multiset<int> s;
        for(int i=1;i<=n;i++){
            s.insert(a[i]);
        }
        for(int i=mex-1;i>=0;i--){
            auto it = s.find(i);
            if(it != s.end()){
                s.erase(it);
            }else{
                it = s.upper_bound(2 * i);
                if(it == s.end()){
                    return false;
                }
                s.erase(it);
            }
        }
        // cout << mex << '
';
        return 1;
    };
    int l = -1,r = n + 1;
    while(l + 1 != r){
        int mid = l + r >> 1;
        if(ck(mid)){
            l = mid;
        }else{
            r = mid;
        }
    }
    cout << l << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    cin >> T;
    while(T--)O_o();
}