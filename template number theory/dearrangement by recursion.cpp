#include<bits/stdc++.h>
using namespace std;
const int mx=1000005;
const int mod=1e9+7;
long long  degen[mx];
void degenerate(){
degen[1]=0;
degen[2]=1;
for(int i=3;i<=mx;i++){
    degen[i]=((i-1)*(degen[i-1]+degen[i-2]))%mod;
}
}
int main(){
    cout<<"find the denerate number of n"<<endl;
    degenerate();
    int n;
    cin>>n;
    cout<<degen[n]<<endl;
    for(int i=1;i<=100;i++)cout<<degen[i]<<endl;
}
