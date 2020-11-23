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
#define hoise cout<<" ho hoise"<<endl;
const int N=100010;

int main(){
int t;
sc(t);
while(t--){
    ll l,r,m;
    scl(l);
    scl(r);
    scl(m);
    for(ll i=1;i<=2e5;i++){
        int s=(m+i-1)/i;
      //  cout<<s<<" "<<l<<" "<<r<<" "<<m<<endl;
        if(s>=l && s<=r && s*i<=m){
            int rem=m-i*s;
            cout<<s<<" "<<l<<" "<<l+rem<<endl;
            break;
        }
    }
}
}
