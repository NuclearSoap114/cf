#include <iostream>
using namespace std;
 
int T;
int main(){
    cin >> T;
    while(T--){
        int n;cin >> n;
        string s;cin >> s;
        int num0 = 0,num1 = 0;
        for(char c : s){
            if(c == '0')num0++;
            else num1++;
        }
        cout << num1 * n - num1 + num0 << '
';
    }
    return 0;
}