#include<bits/stdc++.h>
using namespace std;
vector<int>primes;
int used[8000005];
void make(){
for(int i=2;i<=8000005;i++){
    if(used[i]==0){
        primes.push_back(i);
        for(long long j=1LL*i*i;j<=8000005;j+=i){
                used[j]=1;
    }
}
}
}
int main(){
int n;
cin>>n;
make();
int cnt=0;
while(n>1){
    int j=lower_bound(primes.begin(),primes.end(),n)-primes.begin();
  //  cout<<j<<endl;
    if(primes[j]>n)j--;
    if(j==primes.size())j--;
    cnt++;
    n-=primes[j];
}
if(n==1)cout<<cnt+1<<endl;
else cout<<cnt<<endl;
return 0;
}
