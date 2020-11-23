#include<bits/stdc++.h>
using namespace std;
vector<int>graphs[10005];
int rong[10005],used[10005];
void dfs(int x,int colour){
rong[x]=colour;
for(int y: graphs[x]){
    dfs(y,colour);
}
}
int main(){
int n;
cin>>n;
for(int i=2;i<=n;i++){
    int x;
    cin>>x;
    graphs[x].push_back(i);
}
vector<int>color(n+2);
for(int i=1;i<=n;i++)cin>>color[i];
int cnt=0;
for(int i=1;i<=n;i++){
    if(rong[i]!=color[i]){
        cnt++;
        dfs(i,color[i]);
    }
}
cout<<cnt<<endl;
return 0;
}
