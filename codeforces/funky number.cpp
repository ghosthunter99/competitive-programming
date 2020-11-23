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
int n,m,x,y;
sc(n),sc(m),sc(x),sc(y);
vector<pii>v(n);
for(int i=0;i<n;i++){
    int xx;
    sc(xx);
    v[i]={xx,i};
}
sort(v.begin(),v.end());
vector<pii>sword(m);
for(int i=0;i<m;i++){sc(sword[i].first);sword[i].second=i;}
sort(sword.begin(),sword.end());
int take=0;
vector<pii>ans;
for(int i=0;i<n;i++){
    for(int j=take;j<m;j++){
        if(sword[j].first<=(v[i].first+y) && sword[j].first>=v[i].first-x){
            ans.push_back(mp(v[i].second+1,sword[j].second+1));
            take=j+1;
            break;
        }
    }
}
cout<<ans.size()<<endl;
for(pii xy: ans){
    cout<<xy.first<<" "<<xy.second<<endl;
}
return 0;
}
