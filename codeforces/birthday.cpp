#include<bits/stdc++.h>
using namespace std;
int main(){
int n,x;
cin>>n>>x;
map<int,int>mp;
vector<int>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
    mp[v[i]]++;
    if(mp[v[i]]>1){
        cout<<0<<endl;
        return 0;
    }
}
bool change=0;
for(int i=0;i<n;i++){
    int d=v[i]&x;
    if(mp[d]>0 && d!=v[i]){
        cout<<1<<endl;
        return 0;
    }
}
map<int,int>again;
for(int i=0;i<n;i++){
    int d=v[i]&x;
    again[d]++;
    if(again[d]>1){cout<<2<<endl;return 0;}
}

 cout<<-1<<endl;
return 0;
}
