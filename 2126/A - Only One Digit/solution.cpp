#include <iostream>
using namespace std;
 
int main() {
    int T;
    cin >> T;
    while (T--) {
        string s;
        cin >> s;
        char minn = '9';
        for (char c : s) {
            if (c < minn) minn = c;
        }
        cout << minn << '
';
    }
    return 0;
}