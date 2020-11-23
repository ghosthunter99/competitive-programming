#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m;
cin>>n>>m;
vector<int>graph[n+2];
for(int i=0;i<m;i++){
    int x,y;
    cin>>x>>y;
    graph[x].push_back(y);
    graph[y].push_back(x);
}
int cnt=0;
for(int i=1;i<=n;i++){
    if(graph[i].size()>1){
        cnt++;
    }
}
cout<<n-cnt<<endl;
}
