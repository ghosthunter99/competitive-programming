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
int n,m,k;
sc(n),sc(m),sc(k);
int tot=n*m;
vector<pii>dd;
for(int i=1;i<=n;i++){
    if(i%2==0){
        for(int j=m;j>=1;j--){
            dd.push_back(mp(i,j));
        }
    }
    else{
        for(int j=1;j<=m;j++){
            dd.push_back(mp(i,j));
        }
    }

}
reverse(dd.begin(),dd.end());
vector<pii>ans[k];
int kk=0;
for(int i=1;i<=tot;i++){
    if(k>1){
        ans[kk].push_back(dd.back());
        dd.pop_back();
        kk++;
        k--;
    }
   else if(k==1){
        ans[kk].push_back(dd.back());
        dd.pop_back();
    }
}
for(int i=0;i<=kk;i++){
    cout<<ans[i].size()<<" ";
    for(auto j: ans[i]){
        cout<<j.first<<" "<<j.second<<" ";
    }
    cout<<endl;
}
return 0;
}
