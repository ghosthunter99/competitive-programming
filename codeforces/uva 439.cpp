#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pii pair<int,int>
#define pll pair<ll,ll>
#define mp make_pair
int board[10][10];
int movex[8]={2,2,-2,-2,1,-1,1,-1};
int movey[8]={1,-1,1,-1,2,2,-2,-2};
int level[10][10],vis[10][10];
int bfs(int x1,int y1,int x2,int y2){
    queue<pii>q;
    q.push(mp(x1,y1));
    level[x1][y1]=0;
    while(!q.empty()){
        pii fr=q.front();
        int x0=fr.first,y0=fr.second;
        vis[x0][y0]=1;
        if(x0==x2 && y0==y2)return level[x2][y2];
        for(int i=0;i<8;i++){
            int xn=x0+movex[i],yn=y0+movey[i];
            if(xn<8 && xn>=0 && yn<8 && yn>=0 && vis[xn][yn]==0){
                level[xn][yn]=level[x0][y0]+1;
                q.push(mp(xn,yn));
            }
        }
    }
}
int main(){
string s,t;
while(cin>>s>>t){
    int x1=s[0]-'a',y1=s[1]-'1',x2=t[0]-'a',y2=t[1]-'1';
   cout<<bfs(x1,y1,x2,y2)<<endl;
}
}
