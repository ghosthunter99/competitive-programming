#include<bits/stdc++.h>
using namespace std;
bool cmp(unordered_map<int,vector<int>>x,unordered_map<int,vector<int>>y){
return x.second.size()<y.second.size();
}
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int>v(n);
    unordered_map<int,vector<int>>mp;
    set<int>distinct;
    for(int i=0;i<n;i++){
        cin>>v[i];
        mp[v[i]].push_back(i+1);
        distinct.insert(v[i]);
    }
    if(distinct.size()==1){
        cout<<"NO"<<endl;
    }
    sort(mp.begin(),mp.end(),cmp);
    vector<pair<int,int>>rasta;
    int first=mp[0].second[0];
    for(int i=1;i<mp.size();i++){
        for(int j=0;j<mp[i].size();j++){
            rasta.push_back(make_pair(first,mp[i].second[j]));
        }
    }
    if(mp[0].size()>1){
        int get=mp[1].second[0];
        for(int i=1;i<mp[0].size();i++){
            rasta.push_back(make_pair(get,mp[0].second[i]));
        }
    }
    for(int i=0;i<n;i++){
        cout<<rasta[i].first<<" "<<rasta[i].second<<endl;
    }

}
return 0;
}
