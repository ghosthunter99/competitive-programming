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
const int mx=52;
int used[mx][mx],n,m;
char c[mx][mx];
bool cycle;
bool check(int x,int y,char ch,int parx,int pary){
    if(x==parx && y==pary)return 0;
    if(x<0 || x>=n || y<0 || y>=m || c[x][y]!=c[parx][pary] || cycle)return 0;
    cout<<x<<" "<<y<<endl;
    if(c[x][y]==ch && c[parx][pary]==ch)return 1;
}
void dfs(int i,int j,char ch,int parx,int pary){
if(used[i][j]==1){cycle=1;return;}
used[i][j]=1;
if(check(i,j+1,ch,parx,pary))dfs(i,j+1,ch,i,j);
if(check(i+1,j,ch,parx,pary))dfs(i+1,j,ch,i,j);
if(check(i,j-1,ch,parx,pary))dfs(i,j-1,ch,i,j);
if(check(i-1,j,ch,parx,pary))dfs(i-1,j,ch,i,j);
return;
}
int main(){
sc2(n,m);
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>c[i][j];
    }
}
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(used[i][j]==0){
            dfs(i,j,c[i][j],-1,-1);
        }
    }
}
if(cycle)cout<<"YES"<<endl;
else cout<<"NO"<<endl;
return 0;
}
