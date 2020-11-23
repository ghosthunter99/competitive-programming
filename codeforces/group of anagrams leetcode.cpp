#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
map<string,vector<string>>mm;
vector<string>v[n];
for(int i=0;i<n;i++){
    int m;
    cin>>m;
    for(int j=0;j<m;j++){
        string s;
        cin>>s;
        string s2=s;
        v[i].push_back(s);
        sort(s2.begin(),s2.end());
        mm[s2].push_back(s);
    }
}
vector<vector<string>>vv;
for(auto pp: mm){
    vv.push_back(pp.second);
}
for(int i=0;i<vv.size();i++){
    for(int j=0;j<vv[i].size();j++){
        cout<<vv[i][j]<<" ";
    }
    cout<<endl;
}
return 0;
}
