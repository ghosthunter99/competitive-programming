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
const int mx=100005;
int n,leaf=0;
ll tot=0;
vector<int>graphs[mx];
int vis[mx];
void dfs(int now,int dis){
if(vis[now]==1)return;
vis[now]=1;
for(int x:graphs[now]){
 int    j=dis+1;
    dfs(x,j);
}
if(graphs[now].size()==1){
    leaf++;
    tot+=dis;
}
}

int main(){
   sc(n);
   for(int i=1;i<n;i++){
    int x,y;
    sc2(x,y);
    graphs[x].push_back(y);
    graphs[y].push_back(x);
   }
   dfs(1,0);
double go=1.0*tot/(1LL*leaf);
cout<<setprecision(10)<<go<<endl;
return 0;
}
