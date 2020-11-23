#include<bits/stdc++.h>
using namespace std;
#define mk make_pair
int vis[105];
vector<pair<int,int> >graphs[105];
int dfs(pair<int,int>pos,int sum){
    if(vis[pos.first])return sum;
    sum+=pos.second;
    vis[pos.first]=1;
    for(pair<int,int>x: graphs[pos.first]){
        if(vis[x.first]==0)sum+=dfs(x,0);
    }
    return sum;
}
int main(){
    int n;
    cin>>n;
    for(int i=1;i<n;i++){
        int x,y,cost;
        cin>>x>>y>>cost;
        graphs[x].push_back(mk(y,cost));
        graphs[y].push_back(mk(x,cost));
    }
    int mx=0;
    vis[0]=1;
    for(pair<int,int> y: graphs[0]){
        int sum=0;
        mx=max(mx,dfs(y,sum));
        cout<<mx<<endl;
    }
    cout<<mx<<endl;

}
