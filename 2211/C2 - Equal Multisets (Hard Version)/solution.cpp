#include <bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i,l,r) for(int i=(l);i<=(r);i++)
#define rep_(i,l,r) for(int i=(l);i>=(r);i--)
#define all() a.begin() + 1,a.begin() + n + 1
#define pii pair<int,int>
#define V vector
#define F first
#define S second
#define pb push_back
#define is insert
const int inf = 1LL << 62,N = 2e5 + 10;
const double pi = acos(-1);
// --------------- AC ---------------
int T,n,k;
 
void O_o(){
    bool ok = 1;
    cin >> n >> k;
    V<int> a(n + 1),b(n + 1);
    rep(i,1,n){
        cin >> a[i];
    }
    rep(i,1,n){
        cin >> b[i];
    }
 
    map<int,V<int>> cnt1,cnt2;
    rep(i,1,n){
        int r = i % k;
        cnt1[r].pb(a[i]);
        cnt2[r].pb(b[i]);
    }
 
    map<int,int> cnt,need;
 
    rep(i,0,k - 1){
        V<int> x = cnt1[i],y = cnt2[i];
 
        set<int> st;
        for(int num : x){
            st.is(num);
        }
 
        if(st.size() == 1){
            int val = x[0];
            cnt[val]++;
 
            int p = -1;
            for(int num : y){
                if(num == -1) continue;
                if(p == -1){
                    p = num;
                }else if(p != num){
                    ok = 0;
                    break;
                }
            }
 
            if(p != -1){
                need[p]++;
            }
        }else{
            rep(j,0,(int)x.size() - 1){
                if(y[j] != -1 && y[j] != x[j]){
                    ok = 0;
                    break;
                }
            }
        }
 
        if(!ok) break;
    }
 
    if(ok){
        for(auto [x,c] : need){
            if(c > cnt[x]){
                ok = 0;
                break;
            }
        }
    }
 
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
    cin.tie(nullptr);
    cin >> T;
    while(T--)O_o();
    return 0;
}