#include<bits/stdc++.h>
using namespace std;
const int mod=1000000007;
const int N=1000000;
typedef long long ll;
int dp[N];
int main(){
int n;
scanf("%d",&n);
dp[0]=1;
vector<ll>v(n);
for(int i=0;i<n;i++){
    scanf("%lld",&v[i]);
    vector<int>ss;
    for(int j=1;j*j<=v[i];j++){
        if(v[i]%j==0){
           if(j*j!=v[i]){
            ss.push_back(j);
            ss.push_back(v[i]/j);
           }
           else ss.push_back(j);
        }
    }
    sort(ss.begin(),ss.end());
    reverse(ss.begin(),ss.end());
    for(auto u: ss){
        dp[u]+=dp[u-1];
        dp[u]%=mod;
    }
}
ll ans=0;
for(int i=1;i<=N;i++){
    ans+=dp[i];
    ans%=mod;
}
printf("%lld",ans);
return 0;
}
