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
const int mx=15;
int a[mx][mx],vis[mx][mx];
vector<pii>v;
int ans=0,n,m;
bool check(int x,int y){
if(x<0 || x>=n)return 0;
if(y<0 || y>=m)return 0;
if(vis[x][y])return 0;
return 1;
}
void dfs(int x1,int y1,int x2,int y2){
int first=-1*a[x1][y1],second=-1*a[x2][y2];
if(ans-a[x1][y1]-a[x2][y2]+(-1*a[x1][y1]-1*a[x2][y2]) >ans){
    ans=ans-a[x1][y1]-a[x2][y2]-1*a[x1][y1]-1*a[x2][y2];
    a[x1][y1]=-1*a[x1][y1];
    a[x2][y2]=-1*a[x2][y2];
}
}
int main(){
int t;
sc(t);
while(t--){
    for(int i=0;i<mx;i++){
        for(int j=0;j<mx;j++){
            a[i][j]=0;
            vis[i][j]=0;
        }
    }
    sc2(n,m);
    ans=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            sc(a[i][j]);
            ans+=a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            vis[i][j]=1;
            if(check(i,j+1))dfs(i,j,i,j+1);
            if(check(i,j-1))dfs(i,j,i,j-1);
            if(check(i-1,j))dfs(i,j,i-1,j);
            if(check(i+1,j))dfs(i,j,i+1,j);
        }
    }
    cout<<ans<<endl;
}
}
