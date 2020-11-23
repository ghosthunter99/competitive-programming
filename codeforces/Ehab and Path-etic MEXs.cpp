#include<bits/stdc++.h>
using namespace std;
vector<int>graphs[100005];
int used[100005],label[100005],lagabo;
void dfs(int pos){
if(used[pos])return;
used[pos]=1;
if(pos!=1){
        label[pos]=lagabo;
        lagabo-=1;
}

for(int x: graphs[pos]){
    dfs(x);
}
}
int main(){
int n;
cin>>n;
lagabo=n-2;
int vv[n];
for(int i=1;i<n;i++){
    int x,y;
    cin>>x>>y;
    graphs[x].push_back(y);
    graphs[y].push_back(x);
    vv[i-1]=y;
}
dfs(1);
for(int i=0;i<n-1;i++){
    cout<<label[vv[i]]<<endl;
}
return 0;
}
