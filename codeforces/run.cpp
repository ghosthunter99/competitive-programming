#include<bits/stdc++.h>
using namespace std;
vector<int>graphs[100004];
int used[20005],cnt=0;
void dfs(int pos){
used[pos]=1;
for(int x: graphs[pos]){
    if(used[x]==0){
        cnt++;
        dfs(x);
    }
}
}
int main(){
int n;
cin>>n;
for(int i=1;i<n;i++){
    int x,y;
    cin>>x>>y;
    graphs[x].push_back(y);
    graphs[y].push_back(x);
}
for(int i=1;i<=n;i++){
    if(used[i]==0){
        dfs(i);
    }
}
cout<<cnt<<endl;
return 0;
}
