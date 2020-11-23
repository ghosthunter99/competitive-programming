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

const int mx=2e5+5;
vector<int>graphs[mx];
int son[mx],ans;
void dfs(int now,int par){
    son[now]=1;
    for(int i: graphs[now]){
        if(i!=par){
            dfs(i,now);
            son[now]=son[now]+son[i];
            if(son[i]%2==0)ans++;
        }
    }
}
int main(){
int n;
sc(n);

for(int i=0;i<n-1;i++){
    int u,v;
    sc2(u,v);
    graphs[u].push_back(v);
    graphs[v].push_back(u);
}
dfs(1,0);
if(son[1]%2!=0){
    cout<<-1<<endl;
    return 0;
}
cout<<ans<<endl;
return 0;
}
