#include<bits/stdc++.h>
using namespace std;
vector<int>primes;
int used[100005];
void make(){
for(int i=2;i<=100005;i++){
    if(used[i]==0){
        primes.push_back(i);
        for(long long j=1LL*i*i;j<=100005;j+=i){
            used[j]=1;
        }
    }
}
}
int main(){
long long l,r,x,y;
cin>>l>>r>>x>>y;
make();
long long ch=x*y;
int cnt=0;
for(int i=0;i<primes.size();i++){
    if(ch%primes[i]==0)cnt++;
}
cout<<cnt<<endl;
return 0;
}
