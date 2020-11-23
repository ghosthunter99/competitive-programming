#include<bits/stdc++.h>
using namespace std;
int main(){
int m,n;
scanf("%d%d",&m,&n);
double ans=m;
for(int i=1;i<m;i++){
    ans-=pow(i/m,n);
}
cout<<fixed()<<setprecision(10)<<ans<<endl;
return 0;
}
