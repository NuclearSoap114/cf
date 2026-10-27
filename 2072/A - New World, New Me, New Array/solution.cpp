#include <iostream>
#include <cmath>
using namespace std;
 
int solve(){
	int a,b,c;cin >> a >> b >> c;
	int tmp;
	if(b==0)return 0;
	if(b % c != 0){
		tmp = abs(b / c) + 1;
	}else{
		tmp = abs(b / c);
	}
	if(a<tmp)return -1;
	return tmp;
}
 
int main(){
	int _;cin >> _;
	while(_--)cout << solve() << endl;
	return 0;
}