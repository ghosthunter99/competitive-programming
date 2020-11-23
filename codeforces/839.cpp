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

const int mx=2e5+10;
int n;
vector<int>g[mx];
long double dfs(int v=0,int p=-1){
	long double sum=0;
	for(auto u: g[v]){
		if(u!=p){
			sum+=dfs(u,v)+1;
		}
	}
	return sum? sum/(g[v].size()-(p!=-1)):0;
}
int main(){
	sc(n);
	for(int v,u,i=1;i<n;i++){
		sc2(v,u);
		v--,u--;
		g[v].push_back(u);
		g[u].push_back(v);
	}

	cout<<fixed<<setprecision(7)<<dfs()<<endl;
	return 0;
}
