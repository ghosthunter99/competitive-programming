#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
vector<pair<int,int>>v(n);
for(int i=0;i<n;i++){
    cin>>v[i].first>>v[i].second;
}
if(n==(1 || 2))cout<<n<<endl;
else{
    int ans=2;
    for(int i=1;i<n-1;i++){
        if(v[i].first-v[i-1].first>v[i].second){
            ans++;
           // cout<<i<<" " <<endl;
        }
        else if(v[i+1].first-v[i].first>v[i].second){
            ans++;
            v[i].first+=v[i].second;
          //  cout<<i<<" " <<endl;
        }
    }
    cout<<ans<<endl;
}
}
