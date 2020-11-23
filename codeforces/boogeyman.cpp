#include<bits/stdc++.h>
using namespace std;
#define inf 1e9+7
int main(){
int n;
cin>>n;
vector<int>v(n),dp;
int a[n+1][n+2];
dp.push_back(-inf);
for(int i=0;i<n;i++){
    cin>>v[i];
    auto j=upper_bound(dp.begin(),dp.end(),v[i]);
    if(j==dp.end())dp.push_back(v[i]);
    else {
            int pos=j-dp.begin();
            dp[pos]=v[i];
        }
    a[0][i]=dp.size()-1;
}
for(int i=1;i<n;i++){
    a[i][i]=1;
    for(int j=i+1;j<n;j++){
        if(a[i-1][j]>a[i-1][j-1]){
            a[i][j]=a[i][j-1]+1;
        }
        else a[i][j]=a[i][j-1];
    }
}
for(int i=0;i<n;i++)cout<<a[0][i]<<" ";
cout<<endl;
int q;
cin>>q;
while(q--){
    int x,y;
    cin>>x>>y;
    x--,y--;
    cout<<a[x][y]<<endl;
}
return 0;
}
