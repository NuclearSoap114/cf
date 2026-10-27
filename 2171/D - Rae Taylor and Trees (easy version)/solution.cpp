#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MAXN = 2e5 + 10;
int T,n,a[MAXN],mx[MAXN],mn[MAXN],fa[MAXN];
void init(int sz){
    for(int i=1;i<=sz;i++){
        fa[i] = i;
    }
}
int find(int x){
    if(x = fa[x]) return x;
    return fa[x] = find(fa[x]);
}
void merge(int x,int y){
    int fx = find(x);
    int fy = find(y);
    if(fx != fy){
        fa[x] = fy;
    }
}
void O_o(){
    cin >> n;
    init(n);
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    mn[1] = a[1];
    for(int i=2;i<=n;i++){
        mn[i] = min(mn[i-1],a[i]);
    }
    mx[n] = a[n];
    for(int i=n-1;i>=1;i--){
        mx[i] = max(mx[i+1],a[i]);
    }
    for(int i=1;i<=n;i++){
        if(mn[i-1] > mx[i]){
            cout << "No" << '
';
            return ;
        }
    }
    cout << "Yes" << '
';
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    cin >> T;
    while(T--)O_o();
    return 0;
}