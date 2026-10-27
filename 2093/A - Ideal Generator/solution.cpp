#include <iostream>
using namespace std;
 
void check(int n){
    n++;
    if(n & 1){
        cout << "NO" << endl;
        return ;
    }
    cout << "YES" << endl;
}
 
int main(){
    int t;cin >> t;
    while(t--){
        int tmp;cin >> tmp;
        check(tmp);
    }
    return 0;
}