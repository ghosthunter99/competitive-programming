#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int prefix[2]={1,0};
long long  cnt0=0,cnt1=0,sum=0;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    x=x<0 ? 1: 0;
    sum=(sum+x)%2;
    cnt0+=prefix[sum];
    cnt1+=prefix[1-sum];
    prefix[sum]++;
}
cout<<cnt1<<" "<<cnt0<<endl;
return 0;
}
