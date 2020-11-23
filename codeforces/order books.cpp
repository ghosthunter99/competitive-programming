#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<pair<char,int>,int>x,pair<pair<char,int>,int>y){
return x.first.second>y.first.second;
}
int main(){
int n,s;
cin>>n>>s;
unordered_map<pair<char,int>,int>t;
vector<pair<pair<char,int>,int>>sell;
vector<pair<pair<char,int>,int>>buy;
for(int i=0;i<n;i++){
    char c;
    int x,y;
    cin>>c>>x>>y;
    t[{c,x}]+=y;
}
for(auto i: t){
    if(t.first.first=='S')sell.push_back({{t.first.first,t.first.second},t.second});
    if(t.first.first=='B')buy.push_back({{t.first.first,t.first.second},t.second});
}
sort(sell.begin(),sell.end(),cmp);
sort(buy.begin(),buy.end(),cmp);
int sz=min(sell.size(),buy.size());
for(int i=0;i<sz;i++){
    cout<<sell[i].first.first<<" "<<sell[i].first.second<<" "<<sell[i].second<<endl;
}
for(int i=0;i<sz;i++){
    cout<<buy[i].first.first<<" "<<buy[i].first.second<<" "<<buy[i].second<<endl;
}
return 0;
}
