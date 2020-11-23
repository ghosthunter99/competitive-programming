#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int>x,pair<int,int>y){
return x.second<y.second;
if(x.second==y.second)return x.first<y.first;
}
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<pair<int,int>>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i].first>>v[i].second;
    }
    sort(v.begin(),v.end(),cmp);
    int mx=0;
    for(int i=1;i<n;i++){
        if(v[i].first>v[0].second)mx=max(mx,v[i].first-v[0].second);
    }
    cout<<mx<<endl;
}
return 0;
}
