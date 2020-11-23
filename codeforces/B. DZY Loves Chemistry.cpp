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

int par[51],sz[51],vis[51];
int getpar(int x){
return x==par[x]? x:getpar(par[x]);
}
ll ans=1;
int main(){
int n,m;
sc2(n,m);
for(int i=1;i<=n;i++){
    par[i]=i;
    sz[i]=1;
}
for(int i=0;i<m;i++){
    int x,y;
    sc2(x,y);
    int parx=getpar(x);
    int pary=getpar(y);
    if(parx!=pary){
        par[pary]=par[parx];
        sz[parx]+=sz[pary];
    }
}
for(int i=1;i<=n;i++){
    if(vis[i]==0){
        int bap=getpar(i);
        if(vis[bap]==1)continue;
        else{
            vis[bap]=1;
            ans*=(1LL<<(sz[bap]-1));
        }
    }
}
cout<<ans<<endl;
}
