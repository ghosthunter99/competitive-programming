#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b;
cin>>a>>b;
vector<int>v(a);
for(int i=0;i<a;i++){
    scanf("%d",&v[i]);
}
sort(v.begin(),v.end());
for(int i=0;i<b;i++){
    int x;
    cin>>x;
    auto j=upper_bound(v.begin(),v.end(),x);
    if(j==v.end())cout<<a<<" ";
    else cout<<j-v.begin()<<" ";
}
return 0;
}
