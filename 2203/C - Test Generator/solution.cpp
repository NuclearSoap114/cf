    #include <bits/stdc++.h>
    using namespace std;
    #define int long long
    #define rep(i,l,r) for(int i=(l);i<=(r);i++)
    #define all() a.begin() + 1,a.begin() + n + 1
    #define pii pair<int,int>
    #define V vector
    #define F first
    #define S second
    #define pb push_back
    #define is insert
    const int inf = 1LL << 62,N = 2e5 + 10;
    const double pi = acos(-1);
    // --------------- AC ---------------
    int T,n,x,mask;
 
    int highbit(int yz){
        if(!yz)return 0;
        return 1LL << __lg(yz);
    }
 
    bool check(int n){
        int num = 0;
        int msk = mask;
        while(num < x && msk){
            int need = x - num;
            int hb = highbit(msk);
            int k = min(need / hb,n);
            num += hb * k;
            msk ^= hb;
        }
        return num == x;
    }
 
    void O_o(){
        int ans = 0;
        cin >> x >> mask;
        int l = -1,r = inf;
        bool ok = 0;
        int m = l + r >> 1;
        while(l + 1 != r){
            m = l + r >> 1;
            if(check(m))r = m,ok = 1;
            else l = m;
        }
        if(!ok)cout << -1 << '
';
        else cout << r << '
';
    }
 
    signed main(){
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cin >> T;
        while(T--)O_o();
        return 0;
    }