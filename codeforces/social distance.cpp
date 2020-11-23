#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
   int n,k;
   cin>>n>>k;
   vector<int>v(n);
   for(int i=0;i<n;i++){
     char c;
     cin>>c;
     v[i]=c-'0';
   }
   int ans=0,st=0,dis=0,j;
   while(1){
    auto it=lower_bound(v.begin()+st+1,v.end(),1);
    if(it==v.end()){
        j=it-v.begin();
     //   j--;
        dis=j-st;
    if(v[st]==1)dis=dis-1;
     ans+=(dis/(2*k+1));
   //  if(dis%(2*k+1)!=0)ans++;
      cout<<ans<<endl;break;
    }
    j=it-v.begin();
    dis=j-st;
    if(v[st]==1)dis=dis-1;
     ans+=(dis/(2*k+1));
     //if(dis%(2*k+1)!=0)ans++;
     st=j;
   }
}
}
