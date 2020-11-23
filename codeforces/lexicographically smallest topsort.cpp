#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mp make_pair
#define pii pair<int,int>
#define pll pair<ll,ll>

const int mx=30;
vector<int>graphs[mx];
int main(){
int nodes,edges;
scanf("%d%d",&nodes,&edges);
vector<int>indegree(nodes+1),vis(nodes+1);
for(int i=0;i<edges;i++){
    int x,y;
    scanf("%d%d",&x,&y);
    indegree[y]++;
}
multiset<pii>ml;
queue<int>q;
for(int i=1;i<=nodes;i++){
   ml.insert(mp(indegree[i],i));
}
for(auto i: ml){
    cout<<i.first<<" "<<i.second<<endl;

}
return 0;
}
