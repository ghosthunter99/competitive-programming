#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b;
cin>>a>>b;
//if(a>b)swap(a,b);
long long  tot=a+b;
int target,n=0;
while(tot*2>=(1LL*n*(n+1))){
    n++;
}
n--;
//cout<<n<<endl;
set<int>va,vb;
int num=n;
for(int i=num;i>=1;i--){
    if(b>=i){
        b-=i;
        vb.insert(i);
    }
    else va.insert(i);
}
cout<<va.size()<<endl;
for(auto t: va){
    cout<<t<<" ";
}
cout<<endl<<vb.size()<<endl;
for(auto i: vb){
    cout<<i<<" ";
}
cout<<endl;


}
