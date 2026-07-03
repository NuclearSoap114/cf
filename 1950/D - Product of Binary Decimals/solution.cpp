#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e5 + 10,inf = 1e18;
int T,n;
vector<int> a;
 
bool ok(int x){
    while(x){
        if(x % 10 != 0 && x % 10 != 1){
            return false;
        }
        x /= 10;
    }
    return true;
}
 
void O_o(){
    int cnt = 0;
    cin >> n;
    if(n == 0 || n == 1){
        cout << "YES" << '
';
        return ;
    }
    queue<int> q;
    q.push(n);
    while(!q.empty()){
        int x = q.front();
        q.pop();
        cnt++;
        if(cnt > 2e5)break;
        // cout << x << '
';
        if(x == 1 || x == 0){
            cout << "YES" << '
';
            return ;
        }
        for(int num : a){
            if(num == 0 || num == 1)continue;
            if(x % num == 0){
                q.push(x / num);
            }
        }
    }
    cout << "NO" << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    for(int i=0;i<=N;i++){
        if(ok(i)){
            a.push_back(i);
        }
    }
    cin >> T;
    while(T--)O_o();
}