%:include<bits/stdc++.h>
using namespace std;
%:define int long long
%:define P push_back
const int N=2e5+012;
int n,a<:N:>,b<:N:>,d<:N:>;
vector<int>p,ng;
queue<int>q;
auto O_o()<%
    int i=01,u=00,ans=00;
    cin>>n;
A:  if(i>n)goto B;
    cin>>i<:a:>;++i;goto A;
 
B:  i=01;
C:  if(i>n)goto D;
    cin>>i<:b:>;++i;goto C;
 
D:  i=01;
E:  if(i>n)goto F;
    if(i<:b:> not_eq compl 00)++i<:b:><:d:>;
    ++i;goto E;
F:  i=01;
G:  if(i>n)goto H;
    if(not i<:d:>)q.push(i);
    ++i;goto G;
H:  if(q.empty())goto O;
    u=q.front(),q.pop(),ans+=u<:a:>;
    if(u<:a:><00)goto N;
    p.P(u);
    if(u<:b:> not_eq compl 00)
        u<:b:><:a:>+=u<:a:>;
    goto K;
N:  ng.P(u);
K:  if(u<:b:> not_eq compl 00)<%
        --u<:b:><:d:>;
        if(not u<:b:><:d:>)q.push(u<:b:>);
    %>
    goto H;
O:  cout<<ans<<'
';i=00;
P0: if(i==(int)p.size())goto P1;
    cout<<p<:i:><<' ';++i;goto P0;
P1: i=ng.size();
P2: if(not i)goto P3;
    cout<<ng<:--i:><<' ';goto P2;
 
P3: cout<<'
';
%>
signed main()<%
    ios::sync_with_stdio(0);cin.tie(0);
    O_o();
%>