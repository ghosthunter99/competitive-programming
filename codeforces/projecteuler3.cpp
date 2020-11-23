#include<bits/stdc++.h>
using namespace std;
int primess[1000004];
int main(){
vector<int>prime;
primess[1]=1;
for(int i=2;i*i<=1000004;i++){
    if(primess[i]==0){
        for(int j=i*i;j<=1000004;j+=i){
            primess[j]=1;
        }
    }
}
for(int i=2;i<=1000004;i++){
    if(primess[i]==0)prime.push_back(i);
}
for(int i=prime.size()-1;i>=2;i--){
    if(600851475143%prime[i]==0){
        cout<<primef[i]<<endl;
        return 0;
    }
}
cout<<-1<<endl;
return 0;
}
