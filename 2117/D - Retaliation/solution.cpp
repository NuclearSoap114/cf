#include <bits/stdc++.h>
using namespace std;
#define int long long
int T,n,a[200010];
void O_o(){
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    int y = (2 * a[1] - a[2]) / (n + 1);
    if((2 * a[1] - a[2]) % (n + 1) != 0){                                                                                           
        cout << "No" << '
';                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   
        return ;
    }
    int x = a[1] - n * y;
    if(x < 0 || y < 0){                                                                                                                                                                                                                                                                                                                                                                                     
        cout << "No" << '
';                                                                                                                                                                                                                                                                               
        return ;                                                                                                    
    }
    for(int i=3;i<=n;i++){
        if(a[i] != x * i + (n - i + 1) * y){
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