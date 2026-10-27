#include <bits/stdc++.h>
using namespace std;
#define int long long 
 
void O_o(){
    int n,m;
    cin>>n>>m;
    string s;
    cin>>s;
    vector<int> a(m);
    map<int,int> blk;
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    
    auto add=[&](int pos){
        auto it=blk.upper_bound(pos);
        if(it!=blk.begin()){
            auto pv=--it;
            ++it;
            if(pv->first<=pos&&pos<=pv->second)return;
            if(pv->second+1==pos){
                pv->second=pos;
                if(it!=blk.end()&&it->first==pos+1){
                    pv->second=it->second;
                    blk.erase(it);
                }
                return;
            }
        }
        if(it!=blk.end()&&it->first==pos+1){
            int en=it->second;
            blk.erase(it);
            blk[pos]=en;
            return;
        }
        blk[pos]=pos;
    };
    
    for(int x : a)add(x);
    
    auto nxt=[&](int q)->int{
        auto it=blk.upper_bound(q);
        if(it==blk.begin())return q;
        --it;
        if(it->second>=q)return it->second+1;
        return q;
    };
    
    int temp=1;
    for(char c : s){
        int np=c=='A'?temp+1:nxt(temp+1);
        add(np);
        temp=c=='A'?np:nxt(np+1);
    }
    
    vector<int> all;
    for(auto &[l,r] : blk){
        for(int j=l;j<=r;j++)all.push_back(j);
    }
    
    cout<<all.size()<<'
';
    for(int i=0;i<all.size();i++){
        cout<<all[i]<<(i<all.size()-1?' ':'
');
    }
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
 
    int T;cin >> T;
    while(T--)O_o();
    return 0;
}