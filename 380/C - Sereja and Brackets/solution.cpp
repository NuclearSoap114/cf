#include <bits/stdc++.h>
using namespace std;
#define int long long 
const int N = 1e6 + 5;
string s;
int n,q;
struct node{
    int mx,L,R;
}tree[N << 2];
 
int ls(int p){
    return  p << 1;
}
 
int rs(int p){
    return p << 1 | 1;
}
 
node merge(node x,node y){
    node z;
    auto [xmx,xL,xR] = x;
    auto [ymx,yL,yR] = y;
    auto &[zmx,zL,zR] = z;
    int mn = min(xL,yR);
    zmx = xmx + ymx + mn;
    zL = xL + yL - mn;
    zR = xR + yR - mn;
    return z;
}
 
void push_up(int p){
    tree[p] = merge(tree[ls(p)],tree[rs(p)]);
}
 
void build(int p,int l,int r){
    if(l == r){
        if(s[l] == '('){
            tree[p] = {0,1,0};
        }else{
            tree[p] = {0,0,1};
        }
        return ;
    }
    int mid = l + r >> 1;
    build(ls(p),l,mid);
    build(rs(p),mid + 1,r);
    push_up(p);
}
 
node ask(int p,int ql,int qr,int l,int r){
    if(ql <= l && r <= qr){
        return tree[p];
    }
    int mid = l + r >> 1;
    if(qr <= mid){
        return ask(ls(p),ql,qr,l,mid);
    }
    if(ql > mid){
        return ask(rs(p),ql,qr,mid + 1,r);
    }
    return merge(ask(ls(p),ql,qr,l,mid),ask(rs(p),ql,qr,mid + 1,r));
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    cin >> s >> q;
    n = s.size();
    s = '#' + s;
    build(1,1,n);
    while(q--){
        int l,r;cin >> l >> r;
        cout << ask(1,l,r,1,n).mx * 2 << '
';
    }
    return 0;
}