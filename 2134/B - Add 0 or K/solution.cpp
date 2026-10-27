#include <bits/stdc++.h>
using namespace std;
#define int long long
 
int p[] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
 
int gcd(int a, int b){
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
 
void O_o(){
    int n,k;cin >> n >> k;
    vector<int> a(n);
    int num;
    for(int i=0;i<n;i++){
        cin >> a[i];
        if(i == 0){
            num = a[0];
        }else{
            num = gcd(num,a[i]);
        }
    }
 
    if(num > 1){
        for(int x : a){
            cout << x << ' ';
        }
        cout << '
';
        return ;
    }
 
    if(k & 1){
        for(int i=0;i<n;i++){
            if(a[i] & 1){
                a[i] += k;
            }
        }
    }else{
        int pp;
        for(int i=0;i<24;i++){
            if(k % p[i] != 0){
                pp = p[i];
                break;
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<pp;j++){
                if((a[i] + k * j) % pp == 0){
                    a[i] = a[i] + k * j;
                    break;
                }
            }
        }
    }
    for(int x : a){
        cout << x << ' ';
    }
    cout << '
';
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
 
    int T;cin >> T;
    while(T--)O_o();
    return 0;
}