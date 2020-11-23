#include<bits/stdc++.h>
using namespace std;
vector<long long>fib(52);
void pre(){
fib[0]=1;
fib[1]=1;
for(int i=2;i<=50;i++){
    fib[i]=fib[i-1]+fib[i-2];
}
}
int check(vector<int>v,int start,int limit){
map<int,int>mp;
int take=0;
for(int i=0;i<limit;i++){
    if(mp[v[i]]==0){
       int it=lower_bound(fib.begin()+start,fib.begin()+start+limit,v[i])-fib.begin();
       cout<<fib[it]<<" ";
       if(it==fib.size() || fib[it]!=v[i])continue;
       else {
        mp[v[i]]=1;
        take++;
       }
    }
}
cout<<take<<endl;
return take;
}
int main(){
int n;
scanf("%d",&n);
pre();

vector<int>v(n);
for(int i=0;i<n;i++){
    scanf("%d",&v[i]);
}
sort(v.begin(),v.end());
int ans=0;
for(int i=0;i<=50-n+1;i++){
    ans=max(ans,check(v,i,n));
}
cout<<ans<<endl;
return 0;
}
