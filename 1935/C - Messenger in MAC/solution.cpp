#include <bits/stdc++.h>
using namespace std;
#define int long long 
const int N = 2010;
int T,n,lim;
 
struct msg{
    int a,b;
}v[N];
 
void O_o(){
    cin >> n >> lim;
    for(int i = 1;i <= n;i++){
        cin >> v[i].a >> v[i].b;
    }
 
    sort(v + 1,v + n + 1,[&](msg x,msg y) -> bool {
        if(x.b != y.b) return x.b < y.b;
        else return x.a < y.a;
    });
 
    int ans = -1;
 
    for(int l = 1;l <= n;l++){
        int sum = 0;
        priority_queue<int> pq;
        for(int r = l;r <= n;r++){
            pq.push(v[r].a);
            sum += v[r].a;
            while(!pq.empty() && sum > lim - (v[r].b - v[l].b)){
                sum -= pq.top();
                pq.pop();
            }
            ans = max(ans,(int)pq.size());
        }
    }
 
    cout << ans << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> T;
    while(T--)O_o();
    return 0;
}