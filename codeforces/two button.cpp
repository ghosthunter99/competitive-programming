#include<bits/stdc++.h>
using namespace std;
int level[100005],used[100005];
int main(){
int n,m;
cin>>n>>m;
queue<int>q;
if(n==m){
    cout<<0<<endl;
}
q.push(n);
level[n]=0;
used[n]=1;
while(!q.empty()){
    int first=q.front();
    q.pop();
    if(used[first-1]==0 && first>0){
         q.push(first-1);
         used[first-1]=1;
         level[first-1]=level[first]+1;
    }
   if(first<=m && used[first*2]==0){
        q.push(first*2);
        used[first*2]=1;
    level[first*2]=level[first]+1;
    }

}
cout<<level[m]<<endl;
}
