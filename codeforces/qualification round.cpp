#include<bits/stdc++.h>
using namespace std;
#define mod  1000000007
long long dp[2006][2006];
void solve(){
for(int i=1;i<=2000;i++){
    dp[1][i]=1;
    dp[i][1]=i;
}
for(int i=2;i<=2000;i++){
    for(int j=2;j<=2000;j++){
        dp[i][j]=(dp[i-1][j-1]+dp[i-1][j]+1)%mod;
    }
}
}
int main(){
int n,k;
solve();
  cin>>n>>k;
  cout<<dp[n][k]<<endl;
  return 0;
}
