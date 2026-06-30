#include <bits/stdc++.h>
using namespace std;
#define int long long
int n,c,T;
 
void O_o(){
  int cnt1 = 0,cnt2 = 0;
  cin >> n >> c;
  vector<int> a(n + 1),b(n + 1);
  for(int i=1;i<=n;i++)cin >> a[i];
  for(int i=1;i<=n;i++)cin >> b[i];
  for(int i=1;i<=n;i++){
    if(a[i] >= b[i]){
      cnt1 += a[i] - b[i];
    }else{
      cnt1 = 0x3f3f3f3f3f3f;
      break;
    }
  }
  sort(a.begin() + 1,a.begin() + n + 1);
  sort(b.begin() + 1,b.begin() + n + 1);
//   for(int i=1;i<=n;i++){
//     cout << b[i] << ' ';
//   }
//   cout << '
';
  for(int i=1;i<=n;i++){
    if(a[i] < b[i]){
        cout << -1 << '
';
        return ;
    }else{
        cnt2 += a[i] - b[i];
    }
  }
  cout << min(cnt1,cnt2 + c) << '
';
}
 
signed main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cin >> T;
  while(T--)O_o();
  return 0;
}