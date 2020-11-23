#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mp make_pair
#define pii pair<int,int>
#define pll pair<ll,ll>
const int mx=100000;
vector<ll>primes;
ll used[mx];
void make(){
    primes.push_back(2);
    for(ll i=3;i<=mx;i+=2){
        if(used[i]==0){
            primes.push_back(i);
            for(ll j=i*i;j<=mx;j+=i){
                used[j]=1;
            }
        }
    }
}

int main(){
ll a,b,n;
scanf("%lld%lld%lld",&a,&b,&n);
make();
cout<<primes.size()<<endl;
ll ans=0;
for(ll i=a;i<=b;i++){
    ll anss=1,num=i;
    for(ll j=0;j<primes.size();j++){
        ll k=0;
        if(i==0)break;
           if(i%primes[j]==0){ while(i%primes[j]==0){
                i/=primes[j];
                k++;
                if(i==0)break;
            }
        anss=anss*(k+1);
           }
    }
    if(num!=1)anss+=2;
    if(anss==n)ans++;
}
cout<<ans<<endl;
}
