#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod=1e9+7;
int main(){
ll a,b,c;
ll prod=1,get=123-42;
for(int i=49;i<=61;i++){
    prod=(prod*get)%mod;
    get--;
}
cout<<824071958/prod<<endl;
return 0;
}
