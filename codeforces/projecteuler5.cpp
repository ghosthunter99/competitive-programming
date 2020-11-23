#include<bits/stdc++.h>
using namespace std;
long long lcm(long long x,long long y){
long long t=(x*y);
return t/__gcd(x,y);
}
int main(){
long long ans=1;
for(long long i=20;i>=2;i--){
    ans=lcm(ans,i);
}
cout<<ans<<endl;
}
