#include<bits/stdc++.h>
using namespace std;
int main(){
vector<int>guiter(6);
for(int i=0;i<6;i++){
    cin>>guiter[i];
}
int n;
cin>>n;
vector<int>v(n);
map<int,set<int>>mp;
for(int i=0;i<n;i++){
    cin>>v[i];
    for(int j=0;j<6;j++){
        mp[v[i]-guiter[j]].insert(i);
    }
}

