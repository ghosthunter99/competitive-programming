#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int lcm=1e9;
    int ma,mb;
    for(int i=1;i<=n/2;i++){
       int x=i*(n-i)/(__gcd(i,(n-i)));
       if(x<lcm){
        lcm=i*(n-i)/(__gcd(i,(n-i)));
        ma=i;
        mb=(n-i);
       }
    }
    cout<<ma<<" "<<mb<<endl;
}
}
