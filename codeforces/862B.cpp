#include<bits/stdc++.h>
using namespace std;
vector<int>graphs[100005];
int used[100005],level[100005];
int main(){
int n;
cin>>n;
for(int i=1;i<n;i++){
    int u,v;
    cin>>u>>v;
    graphs[u].push_back(v);
    graphs[v].push_back(u);
}
int cnt0=0,cnt1=0;
queue<int>q;
long long ans=0;
    q.push(1);
    level[1]=0;
while(!q.empty()){
    int first=q.front();
    q.pop();
    used[first]=1;
   // nodes.push_back(first);
    for(int x: graphs[first]){
        if(used[x]==0){
            level[x]=level[first]+1;
            q.push(x);
        }
    }
}
for(int i=1;i<=n;i++){
  if(level[i]&1)cnt1++;
  else cnt0++;

}
//cout<<cnt0<<" "<<cnt1<<endl;
cout<<(cnt0*cnt1)-(n-1)<<endl;
return 0;
}
