#include <iostream>
using namespace std;
int main(){
    int T;cin >> T;
    while(T--){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        if(a != 0 && a == b && b == c && c== d){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
    return 0;
}