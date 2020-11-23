#include<bits/stdc++.h>
using namespace std;
vector<long long>lucky;
void make(long long  bit){
if(bit>1000000000)return;
lucky.push_back(bit);
make(bit*10+4);
make(bit*10+7);
}
int main(){
long long n;
make(0);
cin>>n;
sort(lucky.begin(),lucky.end());
int j=lower_bound(lucky.begin(),lucky.end(),n)-lucky.begin();
cout<<j<<endl;
return 0;
}
