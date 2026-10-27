#include <iostream>
#include <string>
#define ll long long
using namespace std;
int main(){
    int n;cin >> n;
    string s;
    for(int i=0;i<n;i++){
        cin >> s;
        s = s.substr(0, s.length() - 2) + "i";
        cout << s << endl;
    }
}