#include <iostream>
using namespace std;
int main(){
    int t;cin >> t;
    while(t--){
        int n,k;cin >> n >> k;
        string s;cin >> s;
        int cnt = 0;
        for(char c : s){
            if(c == '1'){
                cnt++;
            }
        }
        if(cnt <= k || n < 2 * k){
            cout << "Alice" << '
';
        }else{
            cout << "Bob" << '
';
        }
    }
    return 0;
}