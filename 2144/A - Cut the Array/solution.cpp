#include <bits/stdc++.h>
using namespace std;
 
void O_o(){
    int n;cin >> n;
    vector<int> a(n + 1),b(n + 1),c(n + 1);
    for(int i=1;i<=n;i++){
        int tmp;cin >> tmp;
        a[i] = tmp % 3;
    }
    
    for(int l=1;l<=n - 1;l++){
        for(int r=l;r<=n - 1;r++){
            int sum1 = 0,sum2 = 0,sum3 = 0;
            for(int i=1;i<=l;i++){
                sum1 += a[i];
                sum1 %= 3;
            }
            for(int j=l+1;j<=r;j++){
                sum2 += a[j];
                sum2 %= 3;
            }
            for(int k=r+1;k<=n;k++){
                sum3 += a[k];
                sum3 %= 3;
            }
            if(sum1 == sum2 && sum2 == sum3 && l != r){
                cout << l << ' ' << r << '
';
                return ;
            }
            if(sum1 != sum2 && sum1 != sum3 && sum2 != sum3 && l != r){
                cout << l << ' ' << r << '
';
                return ;
            }
            // if(l == 1 && r == 2)cout << sum1 << ' ' << sum2 << ' ' << sum3 << '
';
        }
    }
    cout << 0 << ' ' << 0 << '
';
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
 
    int T;cin >> T;
    while(T--)O_o();
    return 0;
}