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

int main(){
int n;
sc(n);
vector<int>v(n);
for(int i=0;i<n;i++)sc(v[i]);
sort(v.begin(),v.end());
int t;
sc(t);
int ans=0;
for(int i=0;i<n-1;i++){
    int j=upper_bound(v.begin()+i+1,v.end(),v[i]+t)-v.begin();
   // cout<<(j-i)<<endl;
   if(j!=0) ans=max(ans,(j-i));
}
cout<<ans<<endl;
return 0;
}
