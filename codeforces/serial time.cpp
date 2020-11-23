#include<bits/stdc++.h>
using namespace std;

int k,n,m,used[12][12][12],cnt=0,x,y;
char s[12][12][12];

void dfs(int h,int l,int w){
if(s[h][l][w]=='#')return;
if(used[h][l][w])return;
used[h][l][w]=1;
cnt++;
int g=h+1;
while(g<=k && s[g][l][w]=='.'&& used[g][l][w]==0){
    dfs(g,l,w);
    g++;
}
if(l+1<=n && s[h][l+1][w]=='.' && used[h][l+1][w]==0)dfs(h,l+1,w);
if(l-1>=1 && s[h][l-1][w]=='.' && used[h][l-1][w]==0)dfs(h,l-1,w);
if(w+1<=m && s[h][l][w+1]=='.' && used[h][l][w+1]==0)dfs(h,l,w+1);
if(w-1>=1 && s[h][l][w-1]=='.' && used[h][l][w-1]==0)dfs(h,l,w-1);
}

int main(){
    cin>>k>>n>>m;
    for(int i=0;i<12;i++){
        for(int j=0;j<12;j++){
            for(int kk=0;kk<12;kk++){
                s[i][j][kk]='#';
            }
        }
    }
    for(int i=1;i<=k;i++){
        for(int j=1;j<=n;j++){
            for(int kk=1;kk<=m;kk++){
                    cin>>s[i][j][kk];
            }
        }
    }
    cin>>x>>y;
    dfs(1,x,y);
    cout<<cnt<<endl;
    return 0;
}



