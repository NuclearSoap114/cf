#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
    int T;
    cin>>T;
    while(T--){
        cin>>n;
        cout<<n*2-2<<endl;
        cout<<1<<" "<<1<<" "<<n<<endl;
        cout<<2<<" "<<2<<" "<<n<<endl;
        for(int i=3;i<=n;i++){
            cout<<i<<" "<<1<<" "<<i-1<<endl;
            cout<<i<<" "<<i<<" "<<n<<endl;
        }
    }
}