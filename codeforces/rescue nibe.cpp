#include<bits/stdc++.h>
using namespace std;
const int mod=998244353;
const int N=3e5+5;
int fact[N],invfact[N];


int binexp(int a,int p){
if(p==0)return 1;
int ab=binexp(a,p/2);
ab=(1LL*ab*ab)%mod;
if(p&1)ab=(1LL*ab*a)%mod;
return ab;
}

void pre(){
    fact[0]=1;
    for(int i=1;i<=N;i++){
        fact[i]=(1LL*fact[i-1]*i)%mod;
    }
    invfact[N-1]=binexp(fact[N-1],mod-2);
    for(int i=N-2;i>=0;i--){
        invfact[i]=(1LL*invfact[i+1]*(i+1))%mod;
    }
}

int ncr(int n,int r){
if(r<0 || r>n)return 0;
int niche=(1LL*invfact[n-r]*invfact[r])%mod;
return (1LL*fact[n]*niche)%mod;
}

int main(){
pre();
int n,k;
cin>>n>>k;
map<int,int>mp,st;
for(int i=0;i<n;i++){
    int l,r;
    scanf("%d%d",&l,&r);
    mp[l]++;
    mp[r+1]--;
    st[l]++;
}
long long sum=0;
int active=0;
for(auto i: mp){
    active+=i.second;
    int x=i.first;
    int must=st[x];
    sum+=ncr(active,k)-ncr(active-must,k);
}
cout<<(sum%mod+mod)%mod<<endl;
return 0;
}
