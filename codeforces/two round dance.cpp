#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
long long ans=1;
for(int i=n-1;i>=1;i--){
    ans=i*ans*1LL;
}
ans/=(n/2);
cout<<ans<<endl;
return 0;
}
