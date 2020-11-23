#include<bits/stdc++.h>
using namespace std;
int dp[2002][2002];
int dy[4]={0,1,-1,0};
int dx[4]={1,0,0,-1};
int n,m;
bool valid(int a,int b){
    if(a>=1 && a<=n && b>=1 && b<=m)return true;

    else return false;
}
int main(){
memset(dp,-1,sizeof(dp));
cin>>n>>m;
int k;
cin>>k;
queue<pair<int,int>>q;
for(int i=0;i<k;i++){
    int x,y;
    cin>>x>>y;
    dp[x][y]=0;
    q.push(make_pair(x,y));
}
while(!q.empty()){
    pair<int,int>x=q.front();
      q.pop();
    int nx=x.first;
    int ny=x.second;
    for(int i=0;i<4;i++){
       int  nnx=nx+dx[i];
        int nny=ny+dy[i];
        if(valid(nnx,nny) && dp[nnx][nny]!=-1){
            dp[nnx][nny]=dp[nx][ny]+1;
            q.push(make_pair(nnx,nny));
        }
    }
}
int res=0,ax=1,ay=1;
for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
        if(dp[i][j]>=res){
            res=dp[i][j];
            ax=i;
            ay=j;
        }
    }
}
cout<<ax<<" "<<ay<<endl;
}
