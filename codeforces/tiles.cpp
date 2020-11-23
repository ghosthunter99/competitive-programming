#include<bits/stdc++.h>
using namespace std;
const int mod=998244353;
int main(){
int w,h;
cin>>w>>h;
long long prod=1;
/*
for(int i=1;i<=w;i++){
    prod=(w*2)%mod;
}
for(int i=1;i<=w;i++){
    prod=(prod*2)%mod;
}
*/
prod=(1LL*prod*w*w)%mod;
prod=(1LL*prod*h*h)%mod;
cout<<prod<<endl;
}

//20 10
// 75497471
