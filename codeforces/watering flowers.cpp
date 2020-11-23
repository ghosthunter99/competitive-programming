#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool cmp(pair<int,int>x,pair<int,int>y){
return x.first>y.first;
}
int main(){
int n;
cin>>n;
ll x1,y1,x2,y2;
cin>>x1>>y1>>x2>>y2;
pair<ll,ll>points[n],dis[n];
for(int i=0;i<n;i++){
    cin>>points[i].first>>points[i].second;
    ll dis1=abs(points[i].first-x1)*abs(points[i].first-x1) + abs(points[i].second-y1)*abs(points[i].second-y1);
     ll dis2=abs(points[i].first-x2)*abs(points[i].first-x2) + abs(points[i].second-y2)*abs(points[i].second-y2);
     if(dis1<dis2){
        dis[i]={dis1,1};
     }
     else dis[i]={dis2,2};
}
sort(dis,dis+n,cmp);
for(int i=0;i<n;i++)cout<<dis[i].first<<" "<<dis[i].second<<endl;
ll ans=0;
for(int i=0;i<n;i++){
    if(dis[i].second==1){
        ans=dis[i].first;
        break;
    }
}
for(int i=0;i<n;i++){
    if(dis[i].second==2){
        ans+=dis[i].first;
        break;
    }
}
cout<<ans<<endl;
}
