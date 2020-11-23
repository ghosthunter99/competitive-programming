#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mosthigh 1e18
ll get(ll n){
if(n==1)return 1;
if(n==2 || n==3)return 3;
if(n%3==0)return max(n,get(n/3)*3);
if(n%3==1)return max(get(n/3)*3+1,n);
if(n%3==2)return get((n/3)*3 +3);

}
int main(){
int q;
cin>>q;
while(q--){
    ll n;
    cin>>n;
    cout<<get(n)<<endl;
}
return 0;
}
