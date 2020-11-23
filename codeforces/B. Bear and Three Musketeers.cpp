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

const int mx=4009;
int g[mx][mx],degree[mx],ans=1e9;
int main(){
int n,m;
sc2(n,m);
vector<pii>edge;
for(int i=0;i<m;i++){
    int u,v;
    sc2(u,v);
    degree[u]++,degree[v]++;
    g[u][v]=g[v][u]=1;
    edge.push_back(mp(u,v));
}
for(auto i: edge){
    int fi=i.first,se=i.second;
    for(int j=1;j<=n;j++){
        if(g[fi][j] && g[se][j]){
            ans=min(ans,degree[fi]+degree[se]+degree[j]-6);
        }
    }
}
if(ans==1e9)cout<<-1<<endl;
else cout<<ans<<endl;
return 0;
}
