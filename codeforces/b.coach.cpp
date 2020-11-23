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


const int mx=50;
int vis[mx],n,m,num,deg[mx];
vector<int>g[mx];
int gg[mx][mx];
vector<pii>edge;
struct tin{
int x;
int y;
int z;
};
int main(){
sc2(n,m);
num=n;
for(int i=0;i<m;i++){
    int u,v;
    sc2(u,v);
    deg[u]++;deg[v]++;
    edge.push_back(mp(u,v));
    gg[u][v]=gg[v][u]=1;
}
bool ok=1;
vector<int>left;
for(int i=1;i<=n;i++){
    ok&=(deg[i]==2 || deg[i]==0);
    if(deg[i]==0)left.push_back(i);
}
vector<tin>dhuk;
for(auto i: edge){
    int f=i.first,s=i.second;
    if(vis[f] || vis[s])continue;
    bool ok2=0;
    for(int j=1;j<=n;j++){
        if(gg[f][j] && gg[s][j]){
          dhuk.push_back({f,s,j});
          vis[f]=1;vis[s]=1;vis[j]=1;
          num-=3;
          ok2=1;
          break;
        }
    }
    if(ok2==0){cout<<-1<<endl;return 0;}

}
for(int i=0;i<dhuk.size();i++){
    cout<<dhuk[i].x<<" "<<dhuk[i].y<<" "<<dhuk[i].z<<endl;
}
if(num==0 || left.size()%3!=0)return 0;
for(int i=1;i<=left.size();i++){
    cout<<left[i-1]<<" ";
    if(i%3==0)cout<<endl;
}
return 0;
}

