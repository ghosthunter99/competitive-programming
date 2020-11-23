#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
set<int>s;
vector<int>v(n),pos;
map<int,int>mp;
vector<int>vv[n];
for(int i=0;i<n;i++){
    cin>>v[i];
    s.insert(v[i]);
    mp[v[i]]++;
}
if(s.size()==n){
    cout<<0<<endl;
    for(int i=0;i<n;i++)cout<<v[i]<<" ";

    cout<<endl;
    return 0;
}
set<int>need;
for(int i=1;i<=n;i++){
  if(mp[i]==0)need.insert(i);
}
int cnt =0;
for(int i=0;i<n;i++){
    if(mp[v[i]]>1){
        auto it=*need.begin();

        if(v[i]<it)continue;
        need.erase(it);
        v[i]=it;
        cnt++;
    }
}
for(int i=0;i<n;i++){
    cout<<v[i]<<" ";
}
cout<<endl;
return 0;
}
