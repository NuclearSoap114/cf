#include <bits/stdc++.h>
using namespace std;
 
void O_o(){
    int n;cin >> n;
    vector<int> a(n + 1);
    bool f = 0,f2 = 0;
    int pos1 = 0,pos2 = 0;
    int p1 = 0,p2 = 0;
    int cnt = 0;
    for(int i=1;i<=n;i++){
        cin >> a[i];
        if(a[i] != i && a[i] != 0){
            if(!f){
                pos1 = i;
                f = 1;
            }
            pos2 = i;
        }
        if(a[i] == 0){
            cnt++;
            if(!f2){
                p1 = i;
                f2 = 1;
            }
            p2 = i;
        }
    }
    bool fd = 0;
    // cout << p1 << '
';
    if(cnt == 1){
        for(int i=1;i<=n;i++){
            if(p1 == a[i]){
                fd = 1;
                break;
            }
        }
    }
    fd = !fd;
    if(cnt > 1)fd = 0;
    // cout << fd << '
';
    // cout << pos1 << ' ' << pos2 << ' ' << p1 << ' ' << p2 << '
';
    //数字不可用
    if(pos2 == 0){
        if(fd){
            cout << 0 << '
';
            return ;
        }
        cout << p2 - p1 + 1 << '
';
        return ;
    }
 
    if(!fd && cnt == 1){
        int l = min(p1,pos1);
        int r = max(pos2,p2);
        cout << r - l + 1 << '
';
        return ;
    }
 
    //0不可用
    if(fd || p1 == p2){
        if(pos2 == 0){
            cout << 0 << '
';
            return ;
        }
        cout << pos2 - pos1 + 1 << '
';
        return ;
    }
    int l = min(p1,pos1);
    int r = max(pos2,p2);
    cout << r - l + 1 << '
';
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
 
    int T;cin >> T;
    while(T--)O_o();
    return 0;
}