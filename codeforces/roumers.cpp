#include<bits/stdc++.h>
using namespace std;
int used[1000005];
vector<int>graphs[100005];
void dfs(int x){
if(used[x])return;
used[x]=1;
for(int y: graphs[x]){
    dfs(y);
}
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<int>gold(n);
    for(int i=0;i<n;i++)cin>>gold[i];
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        x--;y--;
        graphs[x].push_back(y);
        graphs[y].push_back(x);
    }
    long long ans=0;
    for(int i=0;i<n;i++){
        if(used[i]==0){
            ans+=gold[i];
            dfs(i);
        }
    }
    cout<<ans<<endl;
}

