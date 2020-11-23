#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod=1e9+7;
const int N=100010;
int fact[N],inv[N];

int binexp(int base, int pow){
if(pow==0)return 1;
int res=binexp(base,pow/2);
res=(1LL*res*res)%mod;
if(pow&1)res=(1LL*res*base)%mod;
return res;
}
void make_ncr(){
    fact[0]=1;
    for(int i=1;i<=N;i++){
        fact[i]=(1LL*fact[i-1]*i)%mod;
    }
    inv[N-1]=binexp(fact[N-1],mod-2);
    for(int i=N-2;i>=0;i--){
        inv[i]=(1LL*inv[i+1]*(i+1))%mod;
    }
}
int findncr(int n,int r){
if(r>n || r<0)return 0;
int niche=(1LL*inv[r]*inv[n-r])%mod;
int res=(1LL*fact[n]*niche)%mod;
return res;
}
int main(){
    make_ncr();
// now try to find ncr give n and r
int t;
scanf("%d",&t);
while(t--){
    int n,r;
    scanf("%d%d",&n,&r);
    cout<<findncr(n,r)<<endl;
}
}
