#include<bits/stdc++.h>
using namespace std;
const int mod=1000000007;
int main(){
int n,x,y;
scanf("%d%d%d",&n,&x,&y);
//pair<int,int>p;
vector<pair<int,int>>v;
long long ans=0;
for(int i=0;i<n;i++){
    int r,rr;
    scanf("%d%d",&r,&rr);
    ans+=1LL*y*(rr-r);
    ans%=mod;
    v.push_back(make_pair(r,-2));
    v.push_back(make_pair(rr,-1));
}
sort(v.begin(),v.end());
vector<int>g;
g.push_back(-1e9);
for(int i=0;i<v.size();i++){
    if(v[i].second==-1){
        g.push_back(v[i].first);
        continue;
    }
    if((1LL*y*(v[i].first-g.back()))<x){
        ans+=1LL*y*(v[i].first-g.back());
        ans%=mod;
        g.pop_back();
    }
    else{
        ans+=x;
        ans%=mod;
    }
}
printf("%lld",ans);
}
