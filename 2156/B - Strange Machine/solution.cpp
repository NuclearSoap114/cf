#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int T,n,q,b,x,p,res;
string s;
void O_o(){
    cin >> n;
    cin >> q;
    cin >> s;
    s = '#' + s;
    int b = 0;
    for(int i=1;i<s.length();i++){
        if(s[i] == 'B'){
            b++;
        }
    }
    if(b == 0){
        while(q--){
            cin >> x;
            cout << x << '
';
        }
        return ;
    }
    while(q--){
        p = 1;
        res = 0;
        cin >> x;
        while(x){
            if(s[p] == 'A'){
                x--;
            }else{
                x >>= 1;
            }
            p++;
            if(p == n + 1){
                p = 1;
            }
            res++;
        }
        cout << res << '
';
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    cin  >> T;
    while(T--)O_o();
    return 0;
}