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

const int N=200009,mod=1e9+7;

int power(int base,int to){
int ans=1;
for(int i=1;i<=to;i++){
    ans=(1LL*ans*base)%mod;
}
return ans;
}
vector<int>graphs[200009];
int vis[200009],sz=0;
void dfs(int now){
vis[now]=1;
sz++;
for(int x:graphs[now]){
    if(vis[x]==0)dfs(x);
}
}
int main(){
int n,k,b=0,r=0;
sc2(n,k);
for(int i=1;i<n;i++){
    int u,v,x;
    sc(u),sc(v),sc(x);
    if(x==0){
        graphs[u].push_back(v);
        graphs[v].push_back(u);
    }
}
int ans=power(n,k);
for(int i=1;i<=n;i++){
    sz=0;
    if(vis[i]==0){
        dfs(i);
        ans-=power(sz,k);
        ans+=mod;
        ans%=mod;
    }
}
cout<<ans<<endl;
return 0;
}
