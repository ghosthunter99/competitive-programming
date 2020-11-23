
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll nc2(int a,int b){
int n=a-b;
ll ans=1LL*n*(n-1)/2;
return ans;
}
int main(){
int d,n;
cin>>n>>d;
vector<int>v(n);
for(int i=0;i<n;i++)cin>>v[i];
sort(v.begin(),v.end());
if(n<3)cout<<0<<endl;
else{
    ll ans=0,go=v[0];
    for(int i=0;i<n-2;i++){
        auto it=upper_bound(v.begin(),v.end(),v[i]+d);
        if(it==v.end()){
            ans+=nc2(n,i+1);
         //  cout<<n<<" "<<i<<endl;
          //  cout<<ans<<endl;
           /// return 0;
        }
       else{ int j=it-v.begin();
      //  cout<<j<<" "<<i<<endl;
        ans+=nc2(j,i+1);
    }
    }
    cout<<ans<<endl;

}
}


/*
while(1){
        auto k=upper_bound(v.begin()+prev,v.end(),go+d);
        if(k==v.end()){
            cout<<n<<" "<<prev<<endl;
            ans+=nc3(n,prev);
            cout<<ans<<endl;
            return 0;
        }
        int j=k-v.begin();
        ans+=nc3(j,prev);
        prev=j;
    }
    */
