#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod=1e9+9;
const int p=31;
vector<pair<int,int> >hashes;
void make_hash(string s,int pos){
int n=s.size();
int hash_val=0,pow=1;
for(int i=0;i<n;i++){
    hash_val=( ((s[i]-'a'+1)*p*pow)%mod)%mod;
    pow=p*pow;
}
hashes.push_back(make_pair(hash_val%mod,pos));
}
int main(){
int n;
cin>>n;
vector<string>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
    make_hash(v[i],i);
}
sort(hashes.begin(),hashes.end());
vector<int>disjoints[2];
for(int i=1;i<n;i+=2){
    if(hashes[i].first==hashes[i-1].first){
        disjoints[0].push_back(hashes[i-1].second+1);
        disjoints[1].push_back(hashes[i].second+1);
    }
}
for(int i=0;i<disjoints[0].size();i++){
    cout<<disjoints[0][i]<<" ";
}
cout<<endl;
for(int i=0;i<disjoints[1].size();i++){
    cout<<disjoints[1][i]<<" ";
}
}
