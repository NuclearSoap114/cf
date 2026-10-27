#include <iostream>
using namespace std;
 
int main(){
    int n;cin >> n;
    int x = 0;
    while(n--){
        string s;cin >> s;
        for(int i=0;i<s.length();i++){
            if(s[i] == '-'){
                x--;
                break;
            }else if(s[i] == '+'){
                x++;
                break;
            }
        }
    }
    cout << x << '
';
    return 0;
}