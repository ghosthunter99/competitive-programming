#include<bits/stdc++.h>
using namespace std;
long long grid[1001][1001];
int n;
#define mod 1000000007
int main(){
int t;
cin>>t;
while(t--){
    string s[1002];
    memset(grid,0,sizeof(grid));
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(s[i][j]=='#'){
            for(int k=j;k>=0;k--){
                grid[i][k]=-1;
            }
            for(int k=i;k>=0;k--){
                grid[k][i]=-1;
            }
        }
    }
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(grid[i][j]==0)cnt++;
        }
    }
    cout<<cnt<<endl;
}
}
