#include<bits/stdc++.h>
using namespace std;
int used[100005];
int main(){
int n;
cin>>n;
vector<int>v(n+5);
int c=0;
for(int i=2;i*i<=n;i++){
    c=c+1;
    used[v[i]]=1;
    v[i]=c;
    for(int j=i;j<=n;j+=i){
        if(used[v[j]]==0){v[j]=v[i];
        used[v[j]]=1;
    }
}
}
for(int i=2;i<=n;i++){
    cout<<v[i]<<" ";
}
return 0;
}
