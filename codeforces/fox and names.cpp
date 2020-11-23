#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mp make_pair
#define pii pair<int,int>
#define pll pair<ll,ll>
const int mx=105;
vector<int>graphs[mx];
int vis[mx];
vector<int>ans;

void orderize(string a,string b){
for(int i=0;i<a.size();i++){
    if(i==b.size()){cout<<"Impossible"<<endl;exit(0);}
    if(a[i]!=b[i]){
        int x=a[i]-'a',y=b[i]-'a';
        graphs[x].push_back(y);
        return ;
    }
}
}

void dfs(int pos){
if(vis[pos]==1)return ;
vis[pos]=1;
for(int x:graphs[pos]){
    if(vis[x]==1){
        cout<<"Impossible"<<endl;exit(0);
    }
    if(vis[x]==2)continue;
    dfs(x);
}
vis[pos]=2;
ans.push_back(pos);
}

int main(){
int n;
scanf("%d",&n);
vector<string>s(n);
for(int i=0;i<n;i++){
    cin>>s[i];
}
for(int i=1;i<n;i++){
    orderize(s[i-1],s[i]);
}
for(int i=0;i<26;i++){
    if(vis[i]==0)dfs(i);
}
map<int,int>mapp;
reverse(ans.begin(),ans.end());
for(int i=0;i<ans.size();i++){
  cout<<char(ans[i]+'a');
  mapp[ans[i]]++;
}
for(int i=0;i<26;i++){
    if(mapp[i]==0)cout<<char(i+'a');
}
return 0;
}
