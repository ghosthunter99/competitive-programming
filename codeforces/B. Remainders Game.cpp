#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mp make_pair
#define pii pair<int,int>
#define pll pair<ll,ll>
#define pi acos(-1)
#define sc(x) scanf("%d",&x)
#define scl(x) scanf("%lld",&x)
#define sc2(x,y) scanf("%d %d",&x,&y)
#define scl2(x,y) scanf("%lld %lld",&x,&y)
#define all(x)  x.begin(),x.end()
#define debug() cerr<<"LINE "<<__LINE__<<" >> ", printer()
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
ll gcd(ll u, ll v)
{
    return u%v==0?v:gcd(v,u%v);
}
ll lcm(ll a,ll b){
return a*b/gcd(a,b);
}

int main(){
ll n,k;
scl2(n,k);
ll l=1;
for(int i=0;i<n;i++){
    ll x;
    scl(x);
 ll g=gcd(x,k);
 l=lcm(l,g);
}
if(l==k)cout<<"YES"<<endl;
else cout<<"NO"<<endl;
return 0;
}
