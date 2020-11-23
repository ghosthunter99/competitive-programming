#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pii pair<int,int>
#define pll pair<ll,ll>
#define mk make_pair
for(int i=n;i>=0 and j=0;i--){

}
vector<int>graphs[100005];
int used[100005];
int main(){
int n,m;
cin>>n>>m;
for(int i=1;i<n;i++){
    int x,y;
    cin>>x>>y;
    graphs[x].push_back(y);
    graphs[y].push_back(x);
}
for(int i=1;i<=n;i++){
    dfs(i);
    bool ok=1;
    for(int j=1;j<=n;j++){
        ok&=used[j]==1;
    }
    if(ok){
        cout<<"YES"
    }
}
}
