#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mp make_pair
#define pii pair<int,int>
#define pll pair<ll,ll>
#define pb push_back
#define pil pair<int,ll>
#define pli pair<ll,int>
#define pi acos(-1)
#define sc(x) scanf("%d",&x)
#define scl(x) scanf("%lld",&x)
#define sc2(x,y) scanf("%d %d",&x,&y)
#define scl2(x,y) scanf("%lld %lld",&x,&y)
#define all(x)  x.begin(),x.end()
#define debug() cerr<<"LINE "<<__LINE__<<" >> ", printer()
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

bool check(int v,int k,int limit){
int sum=0;
while(v>0){
    sum+=v;
    v/=k;
}
return sum>=limit;
}
int main(){
int n,k;
sc(n),sc(k);
int l=1,h=n,ans=n;
while(l<=h){
    int mid=(l+h)/2;
    if(check(mid,k,n)){
        //cout<<mid<<endl;
        ans=min(ans,mid);
        h=mid-1;
    }
    else l=mid+1;
}
cout<<ans<<endl;
return 0;
}
