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

int main(){
int t;
sc(t);
while(t--){
    int n;
    sc(n);
    vector<vector<int>>v(n);
    for(int i=0;i<n;i++){
        int x;
        sc(x);
        x--;
        v[x].pb(i);
    }
    vector<int>ans(n+1,n);
    for(int i=0;i<n;i++){
        if(!v[i].empty()){
            int mx=max(v[i][0],n-v[i].back()-1);
            for(int j=1;j<v[i].size();j++){
                mx=max(mx,v[i][j]-v[i][j-1]-1);
            }
             ans[mx+1]=i+1;
        }
    }
    for(int i=1;i<=n;i++){
        if(ans[i]==n)cout<<-1<<" ";
        else cout<<ans[i]<<" ";
    }
}
}
