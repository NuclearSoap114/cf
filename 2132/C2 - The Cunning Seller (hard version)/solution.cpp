#include <bits/stdc++.h>
using namespace std;
#define int long long 
 
int a[30];
vector<int> money(30);
vector<int> w(30);
 
// void init(){
//     a[0]=1;
//     for(int i=1;i<25;i++)a[i]=a[i-1]*3;
// }
 
void init(){
    money[0] = 1;
    for(int i=1;i<30;i++){
        money[i] = money[i-1] * 3;
    }
    w[0] = 3;
    for(int i=1;i<30;i++){
        w[i] = money[i+1] + i * money[i-1];
    }
}
 
void O_o(){
    int gua,maxn;cin >> gua >> maxn;
    vector<int> cnt(30,0);
    int shen = gua;
    int minn = 0;
    int ori = 0;
    
    for(int i=0;i<30;i++){
        cnt[i] = shen % 3;
        shen /= 3;
        minn += cnt[i];
        ori += cnt[i] * w[i];
        if(shen == 0) break;
    }
    
    if(minn > maxn){
        cout << -1 << '
';
        return;
    }
    
    int extra = (maxn - minn) / 2;
    int less_ = 0;
 
    // int can;
    // for(int i=30;i>=1;i--){
    //     can = min(cnt[i],extra);
    //     less_ += can * money[i-1];
    //     extra -= can;
    //     cnt[i-1] += 3 * can;
    // }
 
    for(int i=29;i>=1;i--){
        int can = min(cnt[i],extra);
        extra -= can;
        less_ += can * money[i-1];
        cnt[i-1] += 3 * can;
    }
    
    cout << ori - less_ << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    
    init();
    
    int T;cin >> T;
    while(T--)O_o();
    return 0;
}
    