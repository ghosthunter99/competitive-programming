#include<bits/stdc++.h>
using namespace std;
#define N 300005
int d1[N],d2[N],d3[N],d4[N];
const int inf=1e9+4;
int main(){
int n;
cin>>n;
d2[0]=d4[n+1]=inf;
vector<pair<int,int>>v(n+2);
for(int i=1;i<=n;i++){
    cin>>v[i].first>>v[i].second;
   d1[i]=max(d1[i-1],v[i].first);
   d2[i]=min(d2[i-1],v[i].second);
}
for(int i=n;i>=1;i--){
   d3[i]=max(d3[i+1],v[i].first);
   d4[i]=min(d4[i+1],v[i].second);
}
int ans=0,tl=0,tr=inf;
for(int i=1;i<=n;i++){
    tl=max(d1[i-1],d3[i+1]);
    tr=min(d2[i-1],d4[i+1]);
    ans=max(ans,tr-tl);
}
cout<<ans<<endl;
return 0;
}
