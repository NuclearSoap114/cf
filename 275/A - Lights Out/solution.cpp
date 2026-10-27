#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long
 
int dx[5] = {1,-1,0,0,0};
int dy[5] = {0,0,1,-1,0};
int a[5][5];
void AC(){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            a[i][j] = 1;
        }
    }
    for(int i=1;i<=3;i++){
        for(int j=1;j<=3;j++){
            int t;cin >> t;
            for(int k=1;k<=t;k++){
                for(int d=0;d<5;d++){
                    int xx = i + dx[d];
                    int yy = j + dy[d];
                    if(a[xx][yy] == 0){
                        a[xx][yy] = 1;
                    }else{
                        a[xx][yy] = 0;
                    }
                }
            }
        }
    }
    for(int i=1;i<=3;i++){
        for(int j=1;j<=3;j++){
            cout << a[i][j];
        }
        cout << '
';
    }
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
 
    int T = 1;
    while(T--)AC();
    return 0;
}