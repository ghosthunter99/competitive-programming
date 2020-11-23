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

const int mx=2005,inf=1e9+7;
int g[mx][mx],n,m,k,vis[mx][mx],dis[mx][mx];
bool check(int x,int y){
if(x<0 || x>=n || y<0 || y>=m)return 0;
if(vis[x][y])return 0;
return 1;
}

int main(){
sc2(n,m);
sc(k);
queue<pii>q;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        dis[i][j]=inf;
    }
}
for(int i=0;i<k;i++){
    int x,y;
    sc2(x,y);
    x--,y--;
    q.push(mp(x,y));
    dis[x][y]=0;
}
while(!q.empty()){
    int xx=q.front().first,yy=q.front().second;
    vis[xx][yy]=1;
    for(int i=0;i<4;i++){
        if(check(xx+dx[i],yy+dy[i])){
            q.push(xx+dx[i],yy+dy[i]);
            dis[xx+dx[i]][yy+dy[i]]=dis[xx][yy]+1;
        }
    }
}
int ans=0;
pii bal={0,0};
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
       if(dis[i][j]>ans){
        bal={i,j};
        ans=dis[i][j];
       }
    }
}
cout<<bal.x<<" "<<bal.y<<endl;
return 0;
}
