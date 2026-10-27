#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void O_o(){
    int n,m,L;cin>>n>>m>>L;
        vector<tuple<int,int,int>> ev;
        for(int i=0;i<n;i++){
            int l,r;cin>>l>>r;
            ev.emplace_back(l,r,1);
        }
        for(int i=0;i<m;i++){
            int x,v;cin>>x>>v;
            ev.emplace_back(x,v,0);
        }
        sort(ev.begin(),ev.end());
        int k=1;
        priority_queue<int> pq;
        bool ok=1;
        for(auto [a,b,t]:ev){
            if(t==0){
                pq.push(b);
            }else{
                while(!pq.empty()&&k<b-a+2){
                    k+=pq.top();
                    pq.pop();
                }
                if(k<b-a+2){
                    ok=0;
                    break;
                }
            }
        }
        if(ok)cout<<m-pq.size()<<"
";
        else cout<<-1<<"
";
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int T;cin >> T;
    while(T--) O_o();
    return 0;
}