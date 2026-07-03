#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 2e5 + 10,inf = 1e18;
int T,n;
string s;
 
void O_o(){
    cin >> n >> s;
    string t = s;
    reverse(t.begin(),t.end());
    t = '#' + t;
    s = '#' + s;
    vector<int> d;
    for(int i=1;i<=n;i++){
        if(n % i == 0)d.push_back(i);
    }
    int ans = inf;
    for(int x : d){
        int cnt = 0;
        bool f = 1;
        for(int i=1;i<=n;i++){
            char c = s[(i - 1) % x + 1];
            if(c != s[i]){
                cnt++;
                if(cnt == 2){
                    f = 0;
                    break;
                }
            }
        }
        if(f){
            ans = min(ans,x);
            break;
        }
    }
    s = t;
    for(int x : d){
        int cnt = 0;
        bool f = 1;
        for(int i=1;i<=n;i++){
            char c = s[(i - 1) % x + 1];
            if(c != s[i]){
                cnt++;
                if(cnt == 2){
                    f = 0;
                    break;
                }
            }
        }
        if(f){
            ans = min(ans,x);
            break;
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
}