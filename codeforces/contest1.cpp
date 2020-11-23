#include<bits/stdc++.h>
using namespace std;
int dp[10005][100];
int a[10005],n,k;
int solve(int pos,int make)
{
    if(pos==n)
    {
        if(make%k==0)
            return 1;
        else
            return 0;
    }
    if(dp[pos][make]!=-1)
        return dp[pos][make];
    int ret1=0,ret2=0,ret3=0,ret4=0,sum=0;
    sum=a[pos]+make;
    if(sum>=0)
        ret1=solve(pos+1,sum%k);
    else
        ret2=solve(pos+1,(sum%k)+k);
    sum=make-a[pos];
    if(sum>=0)
        ret3=solve(pos+1,sum%k);
    else
        ret4=solve(pos+1,(sum%k)+k);

    dp[pos][make]=max(ret1,max(ret2,max(ret3,ret4)));
    return dp[pos][make];
}

int main()
{   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        //int n,k;
        cin>>n>>k;
        memset(dp,-1,sizeof(dp));
        for(int i=0; i<n; i++)cin>>a[i];
        if(solve(0,0)==1)cout<<"Divisible\n";
        else cout<<"Not divisible\n";
    }
}
