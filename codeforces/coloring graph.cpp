#include<bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pii pair<int,int>
int node,edge;
vector<pii>graph[5005];
int vis[5005],res[5005];
bool cycle;
void dfs(int pos){
  vis[pos]=1;
  for(pii p: graph[pos]){
    int ver=p.first,id=p.second;
    if(vis[ver]==0){
        dfs(ver);
        res[id]=1;
    }
    else if(vis[ver]==2){
        res[id]=1;
    }
    else {
        cycle=1;
        res[id]=2;
    }
  }
  vis[pos]=2;
}
int main(){
scanf("%d %d",&node,&edge);
for(int i=0;i<edge;i++){
    int x,y;
    cin>>x>>y;
    x--;y--;
    graph[x].push_back(mp(y,i));
}
for(int i=0;i<node;i++){
    if(vis[i]==0){
        dfs(i);
    }
}
if(cycle)cout<<2<<endl;
else cout<<1<<endl;
for(int i=0;i<edge;i++){
    cout<<res[i]<<" ";
}
return 0;
}

