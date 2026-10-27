#include <bits/stdc++.h>
using namespace std;
#define int long long
#define go(i,a,b) for(int i=a;i<=b;i++)
#define og(i,a,b) for(int i=b;i>=a;i--)
int T,n;
 
void O_o(){
    int n;
    string s;
    cin >> n >> s;
    int ori = 0;
    for(char c : s){
        if(c == '1') ori++;
    }
    int tot = 0;
    int i = 0;
    while(i < n){
        if(s[i] == '0'){
            int j = i;
            while(j < n && s[j] == '0'){
                j++;
            }
            int L = j - i;
            int lt =(i == 0) ? 1 : 0;
            int rt =(j == n) ? 1 : 0;
            int A;
            if(L == 1){
                if(lt == 1 && rt == 1){
                    A = 1;
                } else{
                    A = 0;
                }
            } else{
                A = (lt == 1 ? 1 : 0) + (rt == 1 ? 1 : 0) + (L - 2);
            }
            tot += (A + 2) / 3;
            i = j;
        } else{
            i++;
        }
    }
    cout << ori + tot << endl;
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    cin >> T;
    while(T--)O_o();
}