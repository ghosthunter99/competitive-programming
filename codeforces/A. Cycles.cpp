#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mp make_pair
#define pb push_back
#define pii pair<int,int>
#define pll pair<ll,ll>
#define pi acos(-1)
#define sc(x) scanf("%d",&x)
#define scl(x) scanf("%lld",&x)
#define sc2(x,y) scanf("%d %d",&x,&y)
#define scl2(x,y) scanf("%lld %lld",&x,&y)
#define all(x)  x.begin(),x.end()
#define debug() cerr<<"LINE "<<__LINE__<<" >> ", printer()
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

char graphs[111][111];

void add(int i,int j){
graphs[i][j]='1';
graphs[j][i]='1';
}
int main(){
int edge;
sc(edge);
int first=0;
for(int i=100;i>=3;i--){
    if(i * (i-1)*(i-2)/6 <=edge){
        first=i;
        edge-=i * (i-1)*(i-2)/6;
        break;
    }
}
vector<int>ver;
int st=first;
while(edge>0){
    for(int i=st;i>1;i--){
        if(i*(i-1)/2 <=edge){
            ver.pb(i);
            st=i;
            edge-=(i*(i-1))/2;
            break;
        }
    }
}
int tot=first+ver.size();
for(int i=0;i<tot;i++){
    for(int j=0;j<tot;j++){
        graphs[i][j]='0';
    }
}
for(int i=0;i<first;i++){
    for(int j=0;j<i;j++){
        add(i,j);
    }
}
for(int i=0;i<ver.size();i++){
    for(int j=0;j<ver[i];j++){
        add(i+first,j);
    }
}

cout<<tot<<endl;
for(int i=0;i<tot;i++){
    for(int j=0;j<tot;j++){
        cout<<graphs[i][j];
    }
    cout<<endl;
}
return 0;
}
