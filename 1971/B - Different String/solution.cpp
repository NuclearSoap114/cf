#include <bits/stdc++.h>
using namespace std;
int T;
string s;
void O_o(){
    bool f = 0;
    cin >> s;
    int n = s.size();
    s = '#' + s;
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            if(s[i] != s[j]){
                swap(s[i],s[j]);
                f = 1;
                goto yz;
            }
        }
    }
    yz:
    if(f){
        cout << "YES" << '
';
    }else{
        cout << "NO" << '
';
        return ;
    }
    for(int i=1;i<=n;i++){
        cout << s[i];
    }
    cout << '
';
}
 
int main(){
    cin >> T;
    while(T--)O_o();
    return 0;
}