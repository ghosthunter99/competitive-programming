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

vector<int>graphs[1000005];
int vis[1000005];
int main(){
int n,m;
sc2(n,m);
for(int i=1;i<=m;i++){
    int u,v;
    sc2(u,v);
    graphs[u].push_back(v);
    graphs[v].push_back(u);
}
set<int>s;
s.insert(1);
vector<int>ans;
while(!s.empty()){
  int it=*s.begin();
  vis[it]=1;
  s.erase(it);
  ans.push_back(it);
  for(auto i: graphs[it]){
    if(vis[i]==0)s.insert(i);
  }
}
for(int x: ans)cout<<x<<" ";
cout<<endl;
}
