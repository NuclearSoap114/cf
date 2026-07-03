#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 2e5 + 10,inf = 1e18;
int T,n,a,b,c;
 
void O_o(){
    cin >> a >> b >> c;
    int tot = 2 * a + b + 1;
    if(a + b + c != tot){
        cout << -1 << '
';
        return ;
    }
    if(a + b + c == 1){
        cout << 0 << '
';
        return;
    }
	int cur = 1,nxt = 0,ans = 1;
	for(int i = 0;i < a + b;i++){
		if(!cur){
	        swap(nxt,cur);
	        ans++;
	    }
	    cur--;
	    nxt++;
	    if(i < a){
            nxt++;
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