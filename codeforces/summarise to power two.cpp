#include<bits/stdc++.h>
using namespace std;
string s;
int dp[1000000];
int solve(int pos,int sum){
    if(dp[pos]!=-1)return dp[pos];
    if(pos==s.size())return 0;
    if(s[pos]=='0'){
        if(pos==0)dp[pos]=1+solve(pos+1,0);
        else dp[pos]=max(solve(pos+1,sum),1+solve(pos+1,sum))+dp[pos-1];
    }
    if(pos==0){
        if(s[pos]=='3')dp[pos]=1+solve(pos+1,0);
    }
    if(sum%3==0)dp[pos]=


}
int main(){
cin>>s;
if(s.size()==1){
    if(s[0]=='3' || s[0]=='0')cout<<1<<endl;
    else cout<<0<<endl;
}
cout<<solve(0,0);
return 0;
}
