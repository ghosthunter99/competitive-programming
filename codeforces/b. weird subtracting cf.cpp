#include<bits/stdc++.h>
using namespace std;
int main(){
string s,c="abcdefghijklmnopqrstuvwxyz";
cin>>s;
if(s.size()<26)cout<<-1<<endl;
else{
        int id=0;
    for(int i=0;i<s.size();i++){
        if(s[i]<=c[id] && id<26){
            s[i]=c[id];
            id++;
        }
    }
    if(id==26)cout<<s<<endl;
    else cout<<-1<<endl;
}
}
