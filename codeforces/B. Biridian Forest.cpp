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
const int dx[4]={0,1,0,-1};
const int dy[4]={1,0,-1,0};
const int mx=1010,inf=1e9+7;
int vis[mx][mx],dis[mx][mx],n,m,level[mx];
string g[mx];
bool check(int x,int y){
if(x<0 || x>=n || y<0 || y>=m)return 0;
if(vis[x][y]==1)return 0;
return g[x][y]!='T';
}
void bfs(int x,int y){
queue<pii>q;
q.push(mp(x,y));
dis[x][y]=0;
while(!q.empty()){
    int xx=q.front().first,yy=q.front().second;
    vis[xx][yy]=1;
    q.pop();
    for(int i=0;i<4;i++){
        if(check(xx+dx[i],yy+dy[i])){
            int nx=xx+dx[i],ny=yy+dy[i];
            if(dis[nx][ny]<=dis[xx][yy]+1)continue;
            dis[nx][ny]=dis[xx][yy]+1;
            q.push(mp(nx,ny));
        }
    }
}
}
int main(){
sc2(n,m);
for(int i=0;i<n;i++)cin>>g[i];
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        dis[i][j]=inf;
    }
}
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(g[i][j]=='E'){bfs(i,j);break;}
    }
}
int d;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(g[i][j]=='S'){d=dis[i][j];goto here;}
    }
}
here:
    ;
int ans=0;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(dis[i][j]<=d && (g[i][j]>='0' && g[i][j]<='9')){
            ans+=int(g[i][j]-'0');
        }
    }
}
cout<<ans<<endl;
}
