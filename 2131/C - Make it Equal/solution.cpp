#include <iostream>
#include <map>
using namespace std;
#define int long long 
 
void deal(){
    int n,k;
    cin >> n >> k;
    map<int, int> mp;
    
    for(int i = 0; i < n; i++){
        int tmp;
        cin >> tmp;
        int mod = tmp % k;
        if(mod < 0) mod += k;
        mp[mod]++;
    }
    
    for(int i = 0; i < n; i++){
        int tmp;
        cin >> tmp;
        int mod = tmp % k;
        if(mod < 0) mod += k;
 
        if(mp[mod] > 0){
            mp[mod]--;
        } 
        else if(k != 0 && mp[k - mod] > 0){
            mp[k - mod]--;
        }
        else {
            cout << "NO
";
            for(int j = i + 1; j < n; j++) cin >> tmp;
            return;
        }
    }
    
    for(auto& pair : mp){
        if(pair.second != 0){
            cout << "NO
";
            return;
        }
    }
    
    cout << "YES
";
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    int T;
    cin >> T;
    while(T--){
        deal();
    }
    return 0;
}