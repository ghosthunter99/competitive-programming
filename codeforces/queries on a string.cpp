#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
cin>>s;
int m;
cin>>m;
while(m--){
    int l,r,k;
    cin>>l>>r>>k;
    l--;
    k=k%(r-l);
    rotate(s.begin()+l,s.begin()+r-k,s.begin()+r);
}
cout<<s<<endl;
}
