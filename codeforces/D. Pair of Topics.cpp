#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mp make_pair
#define pii pair<int,int>
#define pll pair<ll,ll>
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
vector<int>a(n),b(n),c(n);
for(int i=0;i<n;i++){
    sc(a[i]);
}
for(int i=0;i<n;i++){
    sc(b[i]);
    c[i]=a[i]-b[i];
}
sort(c.begin(),c.end());
long long ans=0;
for(int i=0;i<n;i++){
    int take=(upper_bound(c.begin()+i+1,c.end(),-1*c[i]))-c.begin();
    ans+=(n-take);
}
cout<<ans<<endl;
return 0;
}
