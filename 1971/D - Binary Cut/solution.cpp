#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
string s;
ll Tex;
void AC() {
    cin >> s;
    s = " " + s;
    ll cnt = 0, fl = 0;
    for (int i = 1; i < s.size(); i ++) {
        if (s[i] != s[i - 1]) cnt ++;
        if (s[i] == '1' && s[i - 1] == '0') fl = 1;
    }
    cout << cnt - fl << "
";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> Tex;
    while (Tex --) AC();
    return 0;
}