#include <bits/stdc++.h>
using namespace std;
#define int long long
int T,n,block;
vector<int> a;
 
bool check(vector<int> &v){
    int tmp = v[1],b = 1;
    for(int i=2;i<=n;i++){
        if(v[i] != tmp){
            b++;
            tmp = v[i];
        }
    }
    return b == block;
}
 
void O_o(){
    cin >> n;
    a.resize(n + 1);
    a[0] = -1e18;
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    set<int> st(a.begin() + 1,a.begin() + n + 1);
    block = st.size();
    
    if(check(a)){
        cout << "Yes" << '
';
        return ;
    }
 
    map<int,int> mp;
    for(int i=1;i<=n;i++){
        if(a[i] != a[i - 1]){
            mp[a[i]]++;
        }
    }
    vector<int> nums;
    for(auto &[x,y] : mp){
        if(y > 3){
            cout << "No" << '
';
            return ;
        }
        if(y > 1){
            nums.push_back(x);
        }
    }
 
    if(nums.size() > 2){
        cout << "No" << '
';
        return ;
    }
 
    vector<int> b;
    set<int> bad(nums.begin(),nums.end());
    for(int i=1;i<=n;i++){
        if(bad.count(a[i])){
            if(i == 1 || i == n)b.push_back(i);
            if(i - 1 >= 1 && a[i] != a[i - 1]){
                b.push_back(i);
                b.push_back(i - 1);
            }
            if(i + 1 <= n && a[i] != a[i + 1]){
                b.push_back(i);
                b.push_back(i + 1);
            }
        }
    }
    sort(b.begin(),b.end());
    b.erase(unique(b.begin(),b.end()),b.end());
    vector<int> tmp;
    for(int i=0;i<b.size();i++){
        for(int j=i + 1;j<b.size();j++){
            tmp = a;
            swap(tmp[b[i]],tmp[b[j]]);
            if(check(tmp)){
                cout << "Yes" << '
';
                return ;
            }
        }
    }
    cout << "No" << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> T;
    while(T--)O_o();
    return 0;
}