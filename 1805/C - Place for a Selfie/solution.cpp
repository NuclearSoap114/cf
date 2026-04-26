#include <bits/stdc++.h>
using namespace std;
#define int long long
inline void fmx(int &a,int b){ if(a<b) a=b;}
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define _rep(i,a,b) for(int i=b;i>=a;i--)
#define all() a.begin() + 1,a.begin() + n + 1
const int inf = 1e18;
int T,n,m;
 
struct para{
    int b,_4ac;
};
 
void O_o(){
    cin >> n >> m;
    vector<int> k(n + 2,0);
    vector<para> pao(m + 1);
    for(int i=1;i<=n;i++){
        cin >> k[i];
    }
    for(int i=1;i<=m;i++){
        int a,b,c;cin >> a >> b >> c;
        pao[i].b = b;
        pao[i]._4ac = 4 * a * c;
    }
    sort(k.begin() + 1,k.begin() + n + 1);
    for(int i=1;i<=m;i++){
        int b = pao[i].b,_ = pao[i]._4ac;
        if(pao[i]._4ac < 0){
            cout << "NO" << '
';
        }else{
            int l = 0,r = k.size() - 1;
            while(l + 1 != r){
                int mid = l + r >> 1;
                if(k[mid] <= pao[i].b){
                    l = mid;
                }else{
                    r = mid;
                }
            }
            int ok = 0;
            if(l >= 1){
                int mn1 = k[l] - b;
                if(mn1 * mn1 < _){
                    ok = 1;
                }
            }
            if(r <= n){
                int mn2 = k[r] - b;
                if(mn2 * mn2 < _){
                    ok = 2;
                }
            }
            if(ok){
                cout << "YES" << '
'; 
                if(ok == 1){
                    cout << k[l] << '
';
                }else{
                    cout << k[r] << '
';
                }
            }else{
                cout << "NO" << '
';
            }
        }
    }
    cout << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    cin >> T;
    while(T--)O_o();
}