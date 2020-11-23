#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    int no;
    cin>>no;
    map<int,int>mp1;
    map<int,int>mp2;
    set<int>a;
    set<int>b;
    for(int i=0;i<no;i++){
        int n,m;
        cin>>n>>m;
        a.insert(n);
        b.insert(m);
        mp1[n]++;
        mp2[m]++;
    }
    long long ans=0;
    if(a.size()<=b.size()){
    for(auto i:a){
        ans+=(mp1[i]*mp2[i]);
    }
    }
    if(b.size()<a.size()){
    for(auto i:b){
        ans+=(mp1[i]*mp2[i]);
    }
    }

    cout<<ans<<endl;
}
}
