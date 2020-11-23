#include<bits/stdc++.h>
using namespace std;
#define N 1010
int a[N][N],c[N],r[N];
int main(){
int n,m,k;
cin>>n>>m>>k;
for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
        scanf("%d",&a[i][j]);
    }
}
for(int i=1;i<=n;i++)r[i]=i;
for(int i=1;i<=m;i++)c[i]=i;
 char cc;
    int x,y;
while(k--){
    scanf(" %c%d%d",&cc,&x,&y);
    if(cc=='r'){
        swap(r[x],r[y]);
    }
   else if(cc=='c'){
        swap(c[x],c[y]);
    }

    else printf("%d\n",a[r[x]][c[y]]);
}
return 0;
}
