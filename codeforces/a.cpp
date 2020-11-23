#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll gcd(ll a , ll b)
{
   if(b==0) return a;
   a%=b;
   return gcd(b,a);
}

const int N=100005;
int coprime[N];
vector<int>primes;
void seive(){
primes.push_back(2);
coprime[2]=1;
for(int i=3;i<=N;i+=2){
    if(coprime[i]==0){
        primes.push_back(i);
        if(1LL*i*i<=N){
            for(int j=i*i;j<=N;j+=i){
                if(j+i>N)break;
                coprime[j]=1;
            }
        }
    }
}
}

int main(){
int t;
cin>>t;
seive();
while(t--){
    ll a,b;
    cin>>a>>b;
    if(a<b){cout<<a<<endl;continue;}
    if(a%b!=0){cout<<a<<endl;continue;}
    if(a==b){cout<<a/2<<endl;continue;}
    vector<ll>v;
    ll common=b;
    for(int i=0;i<primes.size() && common;i++){
        if(common%primes[i]==0){
           ll dh=1;
           while(common%primes[i]==0){
             common/=primes[i];
             dh*=primes[i];
           }
           v.push_back(dh);
        }
    }
    sort(v.begin(),v.end());
    ll ans=1;
    for(int i=0;i<v.size();i++){
        ll x=a/v[i];

       if(x%b!=0)ans=max(ans,a/v[i]);
    }
    cout<<ans<<endl;
}
}
