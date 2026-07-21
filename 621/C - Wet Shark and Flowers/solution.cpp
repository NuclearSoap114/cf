#include <bits/stdc++.h>
using namespace std;
#define int long long
const double add = 4000.0,dda = 2000.0;
int T,n,p;
 
double d(int x){return double(x);}
 
void O_o(){
    cin >> n >> p;
    vector<pair<int,int>> a(n + 1),p_len(n + 2);
    for(int i=1;i<=n;i++){
        cin >> a[i].first >> a[i].second;
        p_len[i].second = a[i].second - a[i].first + 1;
        p_len[i].first = (a[i].second / p) - ((a[i].first - 1) / p);
    }
 
    double ans = 0;
    for(int i=1;i<=n;i++){
        ans += d(p_len[i].first) / d(p_len[i].second) * add;
    }
    p_len[n + 1] = p_len[1];
    for(int i=1;i<=n;i++){
        if(p_len[i].first && p_len[i + 1].first){
            ans -= d(p_len[i].first) * d(p_len[i + 1].first) / d(p_len[i].second) / d(p_len[i + 1].second) * dda;
        }
    }
 
    cout << fixed << setprecision(8);
    cout << ans << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    T = 1;
    while(T--)O_o();
    return 0;
}