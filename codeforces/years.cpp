#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
map<int,int>m;
for(int i=0;i<n;i++){
    int x,y;
    scanf("%d%d",&x,&y);
    m[x]++;
    m[y]--;
}
long long sum=0,ans1=0,ans2=0;
for(auto i: m){
    sum+=i.second;
    if(sum>ans2){
        ans2=sum;
        ans1=i.first;
    }
}
cout<<ans1<<" "<<ans2<<endl;
return 0;
}
