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
int n,m;
vector<int>graphs[mx];
int vis[mx],from[mx],to[mx];
bool col[mx];
int main(){
sc2(n,m);
for(int i=0;i<m;i++){
    int x,y;
    sc2(x,y);
    graphs[x].push_back(y);
	graphs[y].push_back(x);
	from[i]=x;
	to[i]=y;
}
queue<int>q;
for(int i=1;i<=n;i++){
    if(vis[i]==0){
        col[i]=0;
        q.push(i);
        while(!q.empty()){
          int f=q.front();
          q.pop();
          vis[f]=1;
          for(int x: graphs[f]){
            if(vis[x]==0){
                col[x]=col[f]^1;
                q.push(x);
            }
          }
        }
    }
}
for(int i=0;i<m;i++){
    if(col[from[i]]==col[to[i]]){
        cout<<-1<<endl;
        return 0;
    }
}
vector<int>a,b;
for(int i=1;i<=n;i++){
    if(col[i]==0)a.push_back(i);
    else b.push_back(i);
}
cout<<a.size()<<endl;
for(int i=0;i<a.size();i++){
    cout<<a[i]<<" ";
}
cout<<endl<<b.size()<<endl;
for(int i=0;i<b.size();i++){
    cout<<b[i]<<" ";
}
return 0;
}
