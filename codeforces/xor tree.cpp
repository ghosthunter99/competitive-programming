#include<bits/stdc++.h>
using namespace std;
vector<int>graph[100005];
int init[100005],goal[100005];
vector<int>nebo;
int koita=0;
void dfs(int now,int par,int dep,int c0,int c1){
    int me=init[now];
    if(dep%2==0){
        me^=c0;
    }
    else me^=c1;
    if(me!=goal[now]){
        nebo.push_back(now);
        if(dep%2==0){
            c0^=1;
        }
        else c1^=1;
        koita++;
    }
    for(int y : graph[now]){
        if(y==par)continue;
        dfs(y,now,dep+1,c0,c1);
    }
}
int main(){
int n;
cin>>n;
for(int i=1;i<n;i++){
    int x,y;
    cin>>x>>y;
    graph[x].push_back(y);
    graph[y].push_back(x);
}
for(int i=1;i<=n;i++)cin>>init[i];
for(int i=1;i<=n;i++)cin>>goal[i];
dfs(1,-1,0,0,0);
cout<<koita<<endl;
sort(nebo.begin(),nebo.end());
for(int i=0;i<nebo.size();i++){
    cout<<nebo[i]<<'\n';
}
}
   /*
     1    0 level
  2   3   4    1 level
5  7 6 9     8   2 level
*/
