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
vector<int>letter[27];
int par[1000005],vis[1000005];

int findpar(int x){
return x==par[x]? x: findpar(par[x]);
}

int main(){
    int n;
    sc(n);
    for(int i=0;i<n;i++)par[i]=i;
    string s[n+1];
    for(int i=0;i<n;i++){
        cin>>s[i];
        for(int j=0;j<s[i].size();j++){
            letter[s[i][j]-'a'].push_back(i);
        }
    }
    for(int i=0;i<26;i++){
        if(letter[i].size()>1){
            for(int j=0;j<letter[i].size()-1;j++){
                int ek=letter[i][j],dui=letter[i][j+1];
                int par1=findpar(ek),par2=findpar(dui);
                if(par1!=par2){
                    par[par2]=par1;
                }
            }
        }
    }
    int cycle=0;
    for(int i=0;i<n;i++){
        int getpar=findpar(i);
        if(vis[getpar]==0 && getpar==i){
            cycle++;
          //  cout<<i<<endl;
            vis[getpar]=1;
        }
    }
    cout<<cycle<<endl;
}
