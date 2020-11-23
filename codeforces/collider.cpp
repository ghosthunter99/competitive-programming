#include<bits/stdc++.h>
using namespace std;
#define N 100005
vector<int>primes(N);
vector<int>bit[N];
vector<int>primeon[N];
int used[N];
void make(){
for(int i=2;i<=N;i++){
    if(used[i]==0){
        primes[i]=i;
        for(long long j=1LL*i*i;j<=N;j+=i){
            used[j]=1;
            primes[j]=i;
        }
    }
}
primes[1]=1;
}
int main(){
    int n,q;
    cin>>n>>q;
    while(q--){
        char c;
        int x;
        cin>>c>>x;
        if(c=='+'){
            if(bit[x]==0){
                if(primeon[primes[x]]==0){
                    bits[x]=1;
                    primeon[primes[x]]=1;
                    cout<<"Success\n";
                }
                else{
                    cout<<"Collide with "<<
                }
            }
        }
    }
}
