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

const int mx=200005;
vector<int>g[mx];
vector<int>gg;
int ekhn;
void dfs(int now,int par){
gg.push_back(now);
for(int x: g[now]){
    if(x<ekhn && x!=par){
        dfs(x,now);
    }
}
}
int main(){
int t;
sc(t);
while(t--){
    int n;
    sc(n);
    int a[n];
    for(int i=0;i<n;i++){
        sc(a[i]);
        g[i+1].clear();
    }
    for(int i=0;i<n-1;i++){
        int u=a[i],v=a[i+1];
        g[u].push_back(v);
        g[v].push_back(u);
    }
    int ans[n+1];
    ans[1]=1,ans[n]=1;
    for(int i=2;i<n;i++){
        gg.clear();
        ekhn=i;
        dfs(i,0);
        if(gg.size()==i)ans[i]=1;
        else ans[i]=0;
    }
    for(int i=1;i<=n;i++){
        cout<<ans[i];
    }
    cout<<endl;
}
}
