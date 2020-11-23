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

const int mx=105;
int par[mx];
int findpar(int x){
return x==par[x]? x: findpar(par[x]);
}
void unite(int u,int v){
int x=findpar(u),y=findpar(v);
if(x!=y){
    par[y]=x;
}
}
int main(){
int n,m;
sc2(n,m);
if(n!=m){
    cout<<"NO"<<endl;
    return 0;
}
for(int i=1;i<=n;i++){
    par[i]=i;
}
for(int i=1;i<=m;i++){
    int u,v;
    sc2(u,v);
    unite(u,v);
}
for(int i=1;i<n;i++){
    if(findpar(i)!=findpar(i+1)){
        cout<<"NO"<<endl;
        return 0;
    }
}
cout<<"FHTAGN!"<<endl;
return 0;
}
