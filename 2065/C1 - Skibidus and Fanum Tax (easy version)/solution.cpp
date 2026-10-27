//C2
#include <iostream>
#include <algorithm>
#include <cmath>
#define ll long long
using namespace std;
const int N = 2e5+10;
int m,n;
int a[N],b[N];
 
void solve(){
    cin >> n >> m;
    for(int i=0;i<n;++i){
        cin >> a[i];
    }
    for(int j=0;j<m;++j){
        cin >> b[j];
    }
    sort(b,b+m);
    a[0] = min(a[0],b[0]-a[0]);
    for(int i=1;i<n;++i){
        auto it = lower_bound(b,b+m,a[i-1]+a[i]);
        if(it != b+m){//found
            if(a[i] >= a[i-1]){
                a[i] = min(*it - a[i],a[i]);
            }else{
                a[i] = *it - a[i];
            }
        }else{//not found
            if(a[i] < a[i-1]){
                cout << "NO" << endl;
                return ;
            }
        }
    }
    cout << "YES" << endl;
    return ;
}
 
int main(){
    int _;cin >> _;
    while(_--)solve();
    return 0;
}