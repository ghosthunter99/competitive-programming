#include<bits/stdc++.h>
using namespace std;
#define mod 10000007
const int N=1e5+50;
int cnt0[33],cnt1[33];
int main(){
int t;
scanf("%d",&t);
for(int test=1;test<=t;test++){
    int n;
    scanf("%d",&n);
    bitset<32>s[n+1];
    memset(cnt0,0,sizeof(cnt0));
    memset(cnt1,0,sizeof(cnt1));
   long long sum=0;
    for(int i=0;i<n;i++){
       int x;
       scanf("%d",&x);
       s[i]=x;
       for(int j=0;j<32;j++){
         cnt0[j]+=s[i][j]==0;
         cnt1[j]+=s[i][j]==1;
       }
    }

    for(int i=0;i<32;i++){
        sum=(sum+(cnt0[i]*cnt1[i])%mod)%mod;
    }
    printf("Case %d: %lld\n",test,(sum%mod+sum%mod)%mod);
}
}
