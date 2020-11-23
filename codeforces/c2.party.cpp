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

const int mx=2005;
int g[mx][mx],vis[mx],n,fr,notfr;
vector<int>edge[mx];
queue<int>q;
void dfs(int now){
vis[now]=1;
q.push(now);
for(int x: edge[now]){
    if(vis[x]==0 && g[now][x]==0){
        dfs(x);
    }
}
return;
}

int main(){
sc(n);
sc(fr);
for(int i=0;i<fr;i++){
    int u,v;
    sc2(u,v);
    edge[u].push_back(v);
    edge[v].push_back(u);
}
sc(notfr);
int ans=0;
for(int i=0;i<notfr;i++){
    int u,v;
    sc2(u,v);
    g[u][v]=g[v][u]=1;
}
for(int i=1;i<=n;i++){
    if(vis[i]==0){
        q.clear();
        dfs(i);
        bool ok=1;
        for(int i=0;i<q.size();i++){
            for(int j=i+1;j<q.size();j++){
                ok&=(g[i][j]==0);
            }
    }
    if(ok)ans=max(ans,q.size());
}
}
cout<<ans<<endl;
return 0;

}
