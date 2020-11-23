#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n,m;
    cin>>n>>m;
    int v[n+2][m+2];
    bool ok=true;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>v[i][j];
            if((i==1 && j==1) || (i==n && j==m) || (i==1 && j==m) || (i==n && j==1)){
               if(v[i][j]>2)ok=false;
            }
            else if( i==1 || j==1 || i==n || j==m){
                if(v[i][j]>3)ok=false;
            }
        }
    }
    if(!ok){cout<<"NO"<<endl;continue;}
    cout<<"YES"<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if((i==1 && j==1) || (i==n && j==m) || (i==1 && j==m) || (i==n && j==1)){
               v[i][j]=2;
            }
            else if( i==1 || j==1 || i==n || j==m){
                 v[i][j]=3;
            }
            else v[i][j]=4;
            cout<<v[i][j]<<" ";
    }
    cout<<endl;
    }
}
}
