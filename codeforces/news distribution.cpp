#include<bits/stdc++.h>
using namespace std;
int par[500005],s[500005];

int getpar(int x){
return x==par[x]? x : par[x]=getpar(par[x]);
}

int main(){
int n,m;
cin>>n>>m;
for(int i=1;i<=n;i++){
    par[i]=i;
    s[i]=1;
}
for(int i=0;i<m;i++){
    int k;
    cin>>k;
    vector<int>v(k);
    for(int j=0;j<k;j++){
        cin>>v[j];
        if(j>0){
            int x=getpar(v[0]);
            int y=getpar(v[j]);
            if(x!=y){
                par[y]=x;
                s[x]+=s[y];
            }
        }
    }
}
for(int i=1;i<=n;i++){
    int x=getpar(i);
    cout<<s[x]<<" ";
}
}
