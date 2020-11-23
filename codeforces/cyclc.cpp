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

int gcd(int u, int v)
{
    return u%v==0?v:gcd(v,u%v);
}
vector<int>primes;
const int mod=1e9+7;
const int N=100010;
int coprime[N];
void seive(){
primes.push_back(2);
coprime[2]=1;
for(int i=3;i<N;i+=2){
    if(coprime[i]==0){
        primes.push_back(i);
        if(1LL*i*i<=N){
            for(int j=i*i;j<N;j+=i){
                if(j+i>=N)break;
                coprime[j]=1;
            }
        }
    }
}
}
int binpow(int a,int pow){
if(pow==0)return 1;
int ab=binpow(a,pow/2);
ab=(1LL*ab*ab)%mod;
if(pow&1)ab=(1LL*ab*a)%mod;
return ab;
}

const int mx=2e5+5;
int node,edge,degree[mx],vis[mx];
vector<int>graphs[mx];
vector<int>comp;

void dfs(int now){
	vis[now]=1;
	comp.push_back(now);
	for(int x: graphs[now]){
		if(vis[x]==0)dfs(x);
	}
}

int main(){
sc2(node,edge);
for(int i=0;i<edge;i++){
	int x,y;
	sc2(x,y);
	graphs[x].push_back(y);
	graphs[y].push_back(x);
	degree[x]++;
	degree[y]++;
}
int ans=0;
for(int i=1;i<=node;i++){
	if(vis[i]==0){
		dfs(i);
		bool ok=1;
		for(int x:comp){
			ok&=(degree[x]==2);
		}
		if(ok)ans++;
		comp.clear();
	}
}
cout<<ans<<endl;
return 0;
}

		

