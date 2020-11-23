#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++)cin>>v[i];
if(n<4){
    cout<<0<<endl;
    return 0;
}
sort(v.begin(),v.end());
multiset<int>ml;
for(int i=0;i<n;i++){
    if(i==0 || i==n-1){
        if(i==0){
            if(v[1]-v[0]<=1)ml.insert(v[0]);
        }
        else{
            if(v[n-1]-v[n-2]<=1)ml.insert(v[n-1]);
        }
    }
    else{
        if(v[i]-v[i-1]<=1 || v[i+1]-v[i]<=1)ml.insert(v[i]);
    }
}
long long ans=0;
while(ml.size()>=4){
    auto it=ml.end();
    it--;
    int a=*it;
    it--;
    int b=*it;
    it--;
    int c=*it;
    it--;
    int d=*it;
    cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
    ml.erase(a);
    ml.erase(b);
    ml.erase(c);
    ml.erase(d);
    if(a<b)b--;
    if(c<d)d--;
    ans+=(1LL*b*d);
}
cout<<ans<<endl;
return 0;
}
