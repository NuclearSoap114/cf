#include <bits/stdc++.h>
using namespace std;
 
void O_o(){
    int n,m,x,y;cin >> n >> m >> x >> y;
    vector<int> a,b;
    for(int i=0;i<n;i++){
        int tmp;cin >> tmp;
        a.emplace_back(tmp);
    }
    for(int i=0;i<m;i++){
        int tmp;cin >> tmp;
        b.emplace_back(tmp);
    }
    cout << n + m << '
';
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
 
    int T;cin >> T;
    while(T--)O_o();
    return 0;
}