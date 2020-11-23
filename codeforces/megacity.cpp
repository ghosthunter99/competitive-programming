#include<bits/stdc++.h>
using namespace std;
#define ml 1000000
#define pii pair<int,int>
int main(){
int n,s;
cin>>n>>s;
if(s>=ml){
        cout<<0<<endl;
return 0;
}
pair<long long ,long long>pl[n];
for(int i=0;i<n;i++){
    int x,y,ppl;
    cin>>x>>y>>ppl;
    pl[i].first=abs(x)*abs(x)+abs(y)*abs(y);
    if(i==0)pl[i].second=ppl;
    else pl[i].second=pl[i-1].second+ppl;
}
sort(pl,pl+n);
int ans=INT_MAX;
long long dis=1e18;
int l=0,h=n-1,mid;
while(l<=h){
    mid=(l+h)/2;
    if(s+pl[mid].second>=ml){
        ans=min(ans,mid);
        dis=min(dis,pl[mid].first);
        h=mid-1;
    }
    else{
        l=mid+1;
    }
}
if(ans!=INT_MAX){
    cout<<setprecision(10)<<sqrt(dis)<<endl;
}
else cout<<-1<<endl;
return 0;
}
