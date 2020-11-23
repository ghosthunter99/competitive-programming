#include<bits/stdc++.h>
using namespace std;
bool vis[51][51];
int n;
int graph[51][51];
void dfs(int x,int y,vector<pair<int,int>>v){
    if(vis[x][y]==1)return;
    if(graph[x][y]==1){
        vis[x][y]=1;
        v.push_back(make_pair(x,y));
        return;
    }
    vis[x][y]=1;
    if(x>=0 && x<n-1 && y>=0 && y<n && vis[x+1][y]==0 && graph[x+1][y]==0)dfs(x+1,y,v);
    if(x>=0 && x<n && y>=0 && y<n-1 && vis[x][y+1]==0 && graph[x][y+1]==0)dfs(x,y+1,v);
    if(x>0 && x<n && y>=0 && y<n && vis[x-1][y]==0 && graph[x-1][y]==0)dfs(x-1,y,v);
    if(x>=0 && x<n && y>0 && y<n && vis[x][y-1]==0 && graph[x][y-1]==0)dfs(x,y-1,v);

    if(x>=0 && x<n-1 && y>=0 && y<n && graph[x+1][y]==1 && vis[x+1][y]==0){
        vis[x+1][y]=1;
        v.push_back(make_pair(x+1,y));
    }
    if(x>=0 && x<n && y>=0 && y<n-1 && graph[x][y+1]==1 && vis[x][y+1]==0){
         vis[x][y+1]=1;
        v.push_back(make_pair(x,y+1));
    }
    if(x>0 && x<n && y>=0 && y<n && graph[x-1][y]==1 && vis[x-1][y]==0){
         vis[x-1][y]=1;
        v.push_back(make_pair(x-1,y));
    }
    if(x>=0 && x<n && y>0 && y<n && graph[x][y-1]==1 && vis[x][y-1]==0){
         vis[x][y-1]=1;
        v.push_back(make_pair(x,y-1));
    }

}
int main(){
cin>>n;
int r1,c1;
cin>>r1>>c1;
int r2,c2;
cin>>r2>>c2;
r1--,c1--,r2--,c2--;
char s[51][51];
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin>>s[i][j];
    }
}
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        graph[i][j]=s[i][j]-'0';
    }
}
vector<pair<int,int>>point1,point2;
dfs(r1,c1,point1);
dfs(r2,c2,point2);
for(int i=0;i<point1.size();i++)cout<<point1[i].first<<" "<<point1[i].second<<endl;
for(int i=0;i<point2.size();i++)cout<<point2[i].first<<" "<<point2[i].second<<endl;
long long mx=0;
for(int i=0;i<point1.size();i++){
    for(int j=0;j<point2.size();j++){
        long long k=1LL*abs(point1[i].first-point2[i].first)*abs(point1[i].first-point2[i].first)+1LL*abs(point1[i].second-point2[i].second)*abs(point1[i].second-point2[i].second);
        mx=max(mx,k);
    }
}
cout<<mx<<endl;
}
