#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll binpow(ll base,ll p,ll n){
ll res=1;
while(p){
    if(p&1)res=res*base;
    base=base*base;
    p/=2;
}
return res;
}
bool composite(ll n,ll base,ll p,ll s){
ll x=binpow(base,p,n);
if(x==1 || x==n-1)return 0;
for (int r = 1; r < s; r++) {
        x = x * x % n;
        if (x == n - 1)
            return false;
    }
    return true;
};
bool millerrabin(long long n){
if(n<2)return 0;
if(n==2 || n==3)return 1;
long long p=n-1,s=0;
if(p%2==0){
    while(p%2==0){
        p/=2;
        s++;
    }
}
for(int a: {2,3,5,7,11,13,17,19,23,29,31,37}){
    if(n==a)return 1;
    if(composite(n,a,p,s))return false;
}
return 1;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        if(millerrabin(n))cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
