#include <bits/stdc++.h>
using namespace std;
#define int long long
inline void fmx(int &a,int b){ if(a<b) a=b;}
#define go(i,a,b) for(int i=a;i<=b;i++)
#define og(i,a,b) for(int i=b;i>=a;i--)
#define all() a.begin() + 1,a.begin() + n + 1
int T,n;
 
void O_o(){
	int x,y;cin >> x >> y;
	if(x + 1 == y){
		cout << "No" << '
';
		return ;
	}
	int k = y / x;
	if(k > 2){
		cout << "Yes" << '
';
	}else{
		cout << "No" << '
';
	}
}
 
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);cout.tie(nullptr);
	cin >> T;
	while(T--)O_o();
}