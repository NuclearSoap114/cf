#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
 
int main(){
    int cnt = 0;
    string s;cin >> s;
    for(char c : s){
        if(c >= 'a'){
            cnt++;
        }else{
            cnt--;
        }
    }
    if(cnt>=0){
        for(int i=0;i<s.length();i++){
            if(s[i] <= 'Z') s[i] += 32;
        }
    }else{
        for(int i=0;i<s.length();i++){
            if(s[i] >= 'a') s[i] -= 32;
        }
    }
    cout << s << '
';
    return 0;
}