#include <bits/stdc++.h>
using namespace std;
#define int long long 
 
void O_o(){
    int n;
    cin >> n;
    int m = 2 * n;
    vector<int> a(m + 1);
    for(int i = 1;i <= m;i++){
        cin >> a[i];
    }
    
    vector<int> d(m + 1,0);
    for(int i = 1;i < m;i++){
        d[i] = a[i + 1] - a[i];
    }
    
    int co = (m + 1) / 2;
    vector<int> po(co + 1,0);
    int coo = 0;
    for(int p = 1;p <= m;p += 2){
        coo++;
        po[coo] = po[coo - 1] + a[p];
    }
    
    int ce = m / 2;
    vector<int> pe(ce + 1,0);
    int cee = 0;
    for(int p = 2;p <= m;p += 2){
        cee++;
        pe[cee] = pe[cee - 1] + a[p];
    }
    
    vector<int> rmp(n + 1,0);
    for(int k = 1;k <= n;k++){
        rmp[k] = rmp[k - 1] + k * d[k];
    }
    
    vector<int> dw(n + 1,0);
    for(int k = 2;k <= n;k++){
        dw[k] = dw[k - 1] + (k - 1) * d[m - (k - 1)];
    }
    
    auto gs = [&](int st,int nm) -> int {
        if(nm <= 0) return 0;
        bool io = st % 2 == 1;
        int rs;
        if(io) rs = (st + 1) / 2;
        else rs = st / 2;
        int re = rs + nm - 1;
        int sm;
        if(io) sm = po[re] - po[rs - 1];
        else sm = pe[re] - pe[rs - 1];
        return sm;
    };
    
    for(int k = 1;k <= n;k++){
        int p = n - k;
        int osc = 0;
        if(p > 0){
            int td = a[m - k + 1] - a[k + 1];
            int sp = gs(k + 2,p);
            int sn = gs(k + 1,p);
            int sb = sp - sn;
            osc = k * td - sb;
        }
        int res = rmp[k] + dw[k] + osc;
        cout << res;
        if(k < n) cout << " ";
        else cout << '
';
    }
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
 
    int T;
    cin >> T;
    while(T--)O_o();
    return 0;
}