#include <iostream>
 
using namespace std;
 
const int MAXN = 10000001;
bool prime[MAXN];
 
void solve() {
    int x,y;cin >> x >> y;
    if(!prime[x] || !prime[y]){
        cout << "NO" << '
';
        return ;
    }
 
    for(int i=x+1;i<y;i++){
        if(prime[i]){
            cout << "NO" << '
';
            return ;
        }
    }
 
    cout << "YES" << '
';
}
 
int main() {
    for (int i = 0; i < MAXN; i++) prime[i] = 1;
    prime[0] = prime[1] = 0;
	for (int i = 2; i * i < MAXN; i++) {
	    if (!prime[i]) continue;
	    for (int j = i * i; j < MAXN; j += i) 
            prime[j] = 0;
	}
	
    solve();
    return 0;
}