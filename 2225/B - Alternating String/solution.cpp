#include <bits/stdc++.h>
using namespace std;
#define int long long
inline void fmx(int &a,int b){ if(a<b) a=b;}
#define go(i,a,b) for(int i=a;i<=b;i++)
#define og(i,a,b) for(int i=b;i>=a;i--)
#define all() a.begin() + 1,a.begin() + n + 1
int T,n;
string s,s1,s2;
 
bool ok(string t){
	int l,r;
	for(int i=1;i<=n;i++){
		if(s[i] != t[i]){
			r = i;
		}
	}
	for(int i=1;i<=n;i++){
		if(s[i] != t[i]){
			l = i;
			break;
		}
	}
	string t1 = s,t2 = s;
	for(int i=l;i<=r;i++){
		t1[i] = t1[i] == 'a' ? 'b' : 'a';
	}
	reverse(t1.begin() + l,t1.begin() + r + 1);
	reverse(t2.begin() + l,t2.begin() + r + 1);
	return t1 == t || t2 == t;
}
 
void O_o(){	
	cin >> s;
	s1 = s2 = "";
	n = s.size();
	s = '#' + s;
	bool f = 1;
	for(int i=1;i<=n;i++){
		if(f){
			s1 += 'a';
			s2 += 'b';
		}else{
			s1 += 'b';
			s2 += 'a';
		}
		f = !f;
	}
	s1 = '#' + s1;
	s2 = '#' + s2;
	if(ok(s1) || ok(s2)){
		cout << "YES" << '
';
	}else{
		cout << "NO" << '
';
	}
}
 
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);cout.tie(nullptr);
	cin >> T;
	while(T--)O_o();
}