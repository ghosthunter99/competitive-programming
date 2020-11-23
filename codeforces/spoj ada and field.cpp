#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
scanf("%d",&t);
for(int test=1;test<=t;test++){
    int n,m,q;
    scanf("%d %d %d",&n,&m,&q);
    set<int>row,col;
    row.insert(0);
    row.insert(m);
    col.insert(0);
    col.insert(n);
    set<int>a,b;
    a.insert(m);
    b.insert(n);
    while(q--){
        int c,x;
        scanf("%d %d",&c,&x);
        if(c==0){
            if(x==m || x==0){
              auto xx=a.end();
              xx--;
              auto yy=b.end();
              yy--;
              cout<<(*xx)*(*yy)<<endl;
            }
            row.insert(x);
            auto iii=row.lower_bound(x);
           auto age=iii++,piche=iii--;
            int ek=*iii-*piche,dui=*age-*iii;
            a.erase(ek+dui);
            a.insert(ek),a.insert(dui);
              auto xx=a.end();
              xx--;
              auto yy=b.end();
              yy--;
              cout<<(*xx)*(*yy)<<endl;
        }
        if(c==1){
            if(x==n || x==0){
              auto xx=a.end();
              xx--;
              auto yy=b.end();
              yy--;
              cout<<(*xx)*(*yy)<<endl;
            }
            col.insert(x);
               auto iii=col.lower_bound(x);
              auto age=iii++,piche=iii--;
            int ek=*iii-*piche,dui=*age-*iii;
            b.erase(ek+dui);
            b.insert(ek),b.insert(dui);
              auto xx=a.end();
              xx--;
              auto yy=b.end();
              yy--;
              cout<<(*xx)*(*yy)<<endl;
        }
    }
}
}
