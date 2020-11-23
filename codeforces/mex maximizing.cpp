#include<bits/stdc++.h>
using namespace std;
int main(){
int q,x;
cin>>q>>x;
set<pair<int,int>>arr;
vector<int>cnt(x);
for(int i=0;i<x;i++){
    arr.insert(make_pair(0,i));
}
for(int i=0;i<q;i++){
    int v;
    cin>>v;
    v=v%x;
    arr.erase(arr.find(make_pair(cnt[v],v)));
    cnt[v]++;
    arr.insert(make_pair(cnt[v],v));
    auto cur=*arr.begin();
    cout<<(cur.first*x+cur.second)<<endl;
}
return 0;
}
