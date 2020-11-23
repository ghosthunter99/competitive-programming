#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
char s[202][202];
int n;
bool ok;
int vis[202][202];
void dfs(int x,int y,char col){
if(x==n-1 && y==n-1){
    ok|=1;
    return;
}
if(vis[x][y])return;
vis[x][y]=1;
if(x+1<n && (s[x+1][y]==col || s[x+1][y]=='F') && vis[x+1][y]==0)dfs(x+1,y,col);
if(x-1>=0 && (s[x-1][y]==col) && vis[x-1][y]==0)dfs(x-1,y,col);
if(y+1<n && (s[x][y+1]==col || s[x][y+1]=='F') && vis[x][y+1]==0)dfs(x,y+1,col);
if(y-1>=0 && (s[x][y-1]==col) && vis[x][y-1]==0)dfs(x,y-1,col);
}
int main(){
int t;
cin>>t;
while(t--){

    memset(vis,0,sizeof(vis));
    memset(s,'\0',sizeof(s));
   cin>>n;
   for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin>>s[i][j];
    }
   }
   ok=0;
   dfs(0,0,'0');
   if(ok){
     if(s[n-1][n-2]=='1' && s[n-2][n-1]=='1'){
        cout<<2<<endl<<n<<" "<<n-1<<endl<<n-1<<" "<<n<<endl;
     }
   else  if(s[n-1][n-2]=='1' && s[n-2][n-1]=='0'){
        cout<<1<<endl<<n-1<<" "<<n<<endl;
     }
     else if(s[n-1][n-2]=='0' && s[n-2][n-1]=='1'){
        cout<<1<<n<<" "<<n-1<<endl;
     }
    else if(s[n-1][n-2]=='0' && s[n-2][n-1]=='0'){
        cout<<0<<endl;
     }
     goto here;
   }
   if(!ok){cout<<0<<endl;goto here;}
   memset(vis,0,sizeof(vis));
   dfs(0,0,'1');
   ok=0;
    if(ok){
     if(s[n-1][n-2]=='0' && s[n-2][n-1]=='0'){
        cout<<2<<endl<<n<<" "<<n-1<<endl<<n-1<<" "<<n<<endl;
     }
   else  if(s[n-1][n-2]=='0' && s[n-2][n-1]=='1'){
        cout<<1<<endl<<n<<" "<<n-1<<endl;
     }
     else if(s[n-1][n-2]=='1' && s[n-2][n-1]=='0'){
        cout<<1<<n-1<<" "<<n<<endl;
     }
    else if(s[n-1][n-2]=='1' && s[n-2][n-1]=='1'){
        cout<<0<<endl;
     }
     goto here;
   }
   if(!ok){cout<<0<<endl;goto here;}
   here:
       ;
}
}
