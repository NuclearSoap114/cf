#include <bits/stdc++.h>
using namespace std;
#define int long long
//老天保佑金山银山全都有
void O_o(){
    int n,k,L,R;
    cin >> n >> k >> L >> R;
    vector<int> a(n);
    for(auto &x : a){
        cin >> x;
    }
    map<int,int> fk,fkm;
    int dk = 0,dkm = 0;
    int lk = 0,lkm = 0;
    int ans = 0;
    for(int r = 0;r < n;r++){
        if(++fk[a[r]] == 1) dk++;
        if(++fkm[a[r]] == 1) dkm++;
        while(dk > k && lk <= r){
            if(--fk[a[lk]] == 0) dk--;
            lk++;
        }
        while(dkm > k - 1 && lkm <= r){
            if(--fkm[a[lkm]] == 0) dkm--;
            lkm++;
        }
        if(lkm > lk){
            int maxl = r - lk + 1;
            int minl = r - (lkm - 1) + 1;
            int lo = max(minl,L);
            int hi = min(maxl,R);
            ans += max(0LL,hi - lo + 1);
        }
    }
    cout << ans << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int T;cin >> T;
    while(T--) O_o();
    return 0;
}