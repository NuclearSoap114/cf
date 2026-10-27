#include <bits/stdc++.h>
using namespace std;
#define int long long
#define go(i,a,b) for(int i=a;i<=b;i++)
#define go(i,a,b) for(int i=b;i>=a;i--)
int n,sum,sum2,ans = 0x3f3f3f3f3f3f;
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    int cnt = 0;
    cin >> n;
    vector<int> hou(n + 1),kuan(n + 1);
    int mn = ans;
    for(int i=1;i<=n;i++){
        cin >> hou[i] >> kuan[i];
        sum += hou[i];
        sum2 += kuan[i];
        mn = min(mn,kuan[i]);
    }
    for(int i=1;i<=n;i++){
        int x = sum - hou[i];
        if(x >= mn){
            cnt++;
        }
    }
    if(cnt == 0){
        cout << sum << '
';
        return 0;
    }
    vector<int> dp(sum + 5,0);
    for(int i=1;i<=n;i++){
        for(int j=sum;j>=hou[i];j--){
            dp[j] = max(dp[j],dp[j - hou[i]] + kuan[i]);
        }
    }
    for(int i=1;i<=sum;i++){
        if(i >= sum2 - dp[i]){
            ans = min(ans,i);
        }
    }
    cout << ans << '
';
    return 0;
}