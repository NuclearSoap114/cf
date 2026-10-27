#include <bits/stdc++.h>
using namespace std;
#define int long long
int T;
int dx[] = {0,0,1,-1};
int dy[] = {1,-1,0,0};
 
void O_o(){
    int a[110][110] = {0};
    int n;cin >> n;
    int cnt = 1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            a[i][j] = cnt;
            cnt++;
        }
    }
    int cur = 0;
    int ans = 0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            for(int k=0;k<4;k++){
                int tx = i + dx[k];
                int ty = j + dy[k];
                cur += a[tx][ty];
            }
            cur += a[i][j];
            ans = max(ans,cur);
            cur = 0;
        }
    }
    cout << ans << '
';
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    cin >> T;
    while(T--)O_o();
    return 0;
}