#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n,x;
    cin>>n>>x;
    multiset<int>v;
    vector<int>vv(n);
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.insert(x);
        vv[x]=i;
    }
    //vector<pair<int,int>>pr;
    vector<int>ans(n,-1);
    for(auto i: v){
        auto pos=v.find(x-i);
        if(pos==v.end())continue;
        else{
            ans[vv[i]]=0;
            ans[vv[*pos]]=1;
        }
    }
    for(int i=0;i<n;i++){
        if(ans[i]==-1)ans[i]=0;
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    v.clear();vv.clear();
}
}
