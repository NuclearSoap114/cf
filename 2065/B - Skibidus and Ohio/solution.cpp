#include <iostream>
#include <string>
using namespace std;
int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        string s;
        cin >> s;
        bool found = false;
        for (size_t j = 0; j < s.length() - 1; ++j) {
            if (s[j] == s[j + 1]) {
                found = true;
                break;
            }
        }
        if (found) {
            cout << 1 << endl;
        } else {
            cout << s.length() << endl;
        }
    }
    return 0;
}