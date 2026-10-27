#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 2e5 + 10;
int n,a[N],q,tree[N << 2],lazy[N << 2];
 
int ls(int p){
    return p << 1;
}
 
int rs(int p){
    return p << 1 | 1;
}
 
void up(int p){
    tree[p] = min(tree[ls(p)],tree[rs(p)]);
}
 
void lazify(int p,int k){
    tree[p] += k;
    lazy[p] += k;
}
 
void down(int p){
    if(lazy[p]){
        lazify(ls(p),lazy[p]);
        lazify(rs(p),lazy[p]);
        lazy[p] = 0;
    }
}
 
void build(int p,int l,int r){
    if(l == r){
        tree[p] = a[l];
        return ;
    }
    int mid = l + r >> 1;
    build(ls(p),l,mid);
    build(rs(p),mid + 1,r);
    up(p);
}
 
void ox(int p,int k,int nl,int nr,int l,int r){
    if(nl <= l && r <= nr){
        lazify(p,k);
        return ;
    }
    down(p);
    int mid = l + r >> 1;
    if(nl <= mid){
        ox(ls(p),k,nl,nr,l,mid);
    }
    if(mid < nr){
        ox(rs(p),k,nl,nr,mid + 1,r);
    }
    up(p);
}
 
int ask(int p,int ql,int qr,int l,int r){
    if(ql <= l && r <= qr){
        return tree[p];
    }
    down(p);
    int mid = l + r >> 1;
    if(qr <= mid){
        return ask(ls(p),ql,qr,l,mid);
    }
    if(mid < ql){
        return ask(rs(p),ql,qr,mid + 1,r);
    }
    return min(ask(ls(p),ql,qr,l,mid),ask(rs(p),ql,qr,mid + 1,r));
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    cin >> n;
    for(int i=0;i<n;i++)cin >> a[i];
    build(1,0,n - 1);
    cin >> q;
    string line;
    getline(cin,line);
    while(q--){
        getline(cin,line);
        if(line.empty())continue;
        stringstream ss(line);
        int l,r,v;
        if(ss >> l >> r >> v){
            if(l <= r)ox(1,v,l,r,0,n - 1);
            else{
                ox(1,v,l,n - 1,0,n - 1);
                ox(1,v,0,r,0,n - 1);
            }
        }else{
            ss.clear();
            ss.str(line);
            ss >> l >> r;
            if(l <= r)cout << ask(1,l,r,0,n - 1) << '
';
            else cout << min(ask(1,l,n - 1,0,n - 1),ask(1,0,r,0,n - 1)) << '
';
        }
    }
    return 0;
}