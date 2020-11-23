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

const int mx=1000006;
int n,m,k;
vector<int>g[mx];
int vis[mx];
vector<int>ans;
void dfs(int now){
if(vis[now]==2)return;
vis[now]=1;
for(int x: g[now]){
    if(vis[x]==1){
        cout<<-1<<endl;exit(0);
    }
    if(vis[x]==0)dfs(x);
}
vis[now]=2;
ans.push_back(now);
}
int main(){
    sc2(n,k);
    vector<int>comp;
    for(int i=0;i<k;i++){
        int x;
        sc(x);
        comp.push_back(x);
    }
    for(int i=1;i<=n;i++){
        int sz;
        sc(sz);
        for(int j=0;j<sz;j++){
            int x;
            sc(x);
            g[i].push_back(x);
        }
    }
  //  sort(comp.begin(),comp.end());
    for(int i=0;i<k;i++){
        if(vis[comp[i]]==0){
            dfs(comp[i]);
        }
    }
   // reverse(ans.begin(),ans.end());
    cout<<ans.size()<<endl;
    for(int x: ans)cout<<x<<" ";

}
