#include<bits/stdc++.h>
using namespace std;
int main(){
int n,k;
cin>>n>>k;
multiset<pair<int,int>>ml;
int last=0;
for(int i=0;i<n;i++){
    int x,y;
    cin>>x>>y;
    last=max(last,y);
    ml.push_back(make_pair(x,y));
}
for(int i=1;i<=last;i++){
    if()
}
