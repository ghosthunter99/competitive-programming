#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mp make_pair
#define pii pair<int,int>
#define pll pair<ll,ll>
#define sc(x) scanf("%d",&x)
#define scl(x) scanf("%lld",&x)
#define sc2(x,y) scanf("%d %d",&x,&y)
#define scl2(x,y) scanf("%lld %lld",&x,&y)
#define all(x)  x.begin(),x.end()
#define debug() cerr<<"LINE "<<__LINE__<<" >> ", printer()
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

map<int,int>mpp;
vector<int>graphs[500000];
int vis[500000];
int n,k,now,ans;
void dfs(int par,int dis){
if(vis[par]==1)return;
vis[par]=1;
if(dis==k){
    if(mpp[now]==par || mpp[par]==now)return;
    ans++;
    cout<<now<<" "<<par<<" "<<dis<<endl;
    mpp[now]=par;
    mpp[par]=now;
}
if(dis>=k)return;
for(int x: graphs[par]){
    dfs(x,++dis);
}
}
int main(){
sc(n),sc(k);
for(int i=1;i<n;i++){
    int a,b;
    sc2(a,b);
    graphs[a].push_back(b);
    graphs[b].push_back(a);
}

for(int i=1;i<=n;i++){
    memset(vis,0,sizeof(vis));
            dfs(i,0);
            now=i;
}
cout<<ans<<endl;
return 0;

}
