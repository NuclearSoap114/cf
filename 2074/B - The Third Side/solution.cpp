#include <iostream>
#include <cstring>
using namespace std;
 
const int N = 2e5 + 10;
int a[N];
int n;
 
int solve(){
    if(n == 1){
        return a[0];
    }
    int sum = 0;
    for(int i=0;i<n;i++){
        sum += a[i];
    }
    return (sum - n + 1);
}
 
int main(){
    int T;cin >> T;
    while(T--){
        cin >> n;
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        cout << solve() << endl;
        memset(a,0,sizeof(a));
    }
    return 0;
}