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
int t;
sc(t);
while(t--){
    int n,k;
    sc2(n,k);
   int zero=n-k;
    if(n>=2*zero){
       ll need=1LL*n*(n+1)/2 - 1LL*zero;
       cout<<need<<endl;
    }
    else if(n==zero){
        cout<<0<<endl;
    }
    else if(n&1 && zero==(n/2 +1)){
        ll need=1LL*n*(n+1)/2 - 1LL*zero;
       cout<<need<<endl;
    }
    else{
        int per=k;
        int onek=zero/(k+1);
        int ekta=zero-onek*k;
        if(zero%(k+1)==0)k++;
        ll need=1LL*n*(n+1)/2-(1LL*k*onek*(onek+1)/2)-1LL*ekta*(ekta+1)/2;
        cout<<need<<endl;
    }
}
}
