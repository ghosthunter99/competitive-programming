#include<bits/stdc++.h>
using namespace std;
vector<int>graphs[100005];
int cats[100005],used[100005],n,m,cnt=0;
void dfs(int pos,int noofcats){
    if(used[pos])return;
    used[pos]=1;
    if(cats[pos]==1){
        noofcats+=cats[pos];
        if(noofcats>m)return;
    }
    if(cats[pos]==0)noofcats=0;
    for(int x: graphs[pos]){
        if(graphs[pos].size()==1 && used[x]==1 && pos!=1)cnt++;
        if(used[x]==0)dfs(x,noofcats);
    }

}
int main(){
cin>>n>>m;
for(int i=1;i<=n;i++){
    cin>>cats[i];
}
for(int i=1;i<n;i++){
    int x,y;
    cin>>x>>y;
    graphs[x].push_back(y);
    graphs[y].push_back(x);
}
dfs(1,0);
cout<<cnt<<endl;
return 0;
}
