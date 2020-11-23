#include<bits/stdc++.h>
using namespace std;
int grid[1000][1000],vis[1000][1000];
int n,m;
void dfs(int x,int y){
if(x==n || y==m)return;
if(grid[x][y]==1){
    vis[x][y]=1;
    dfs(x,y+1);
    dfs(x+1,y);
}
}
int main(){
cin>>n>>m;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>grid[i][j];
    }
}
int cnt=0;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(vis[i][j]==0 && grid[i][j]==1){
            dfs(i,j);
            cnt++;
        }
    }
}
cout<<cnt<<endl;
return 0;

}
