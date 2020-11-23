#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
multiset<int>v;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    v.insert(x);
}
while(v.size()>=2){
    int x=*v.begin();
    v.erase(x);
    auto i=v.end();
    i--;
    int y=*i;
    v.erase(y);
    if(x!=y){
        v.insert(y-x);
    }
}
if(v.empty())cout<<0<<endl;
else cout<<*v.begin()<<endl;
return 0;
}
