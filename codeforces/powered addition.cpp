#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    string s,t,p;
    cin>>s>>t>>p;
    bool ok=1;
    for(int i=0;i<s.size();i++){
        if(t.find(s[i])!=string::npos){
            int pos=t.find(s[i]);
            t.erase(0,pos+1);
        }
        else ok=0;
    }
    if(ok){for(int i=0;i<t.size();i++){
        if(p.find(t[i])!=string::npos){
            int pos=p.find(t[i]);
            p.erase(pos,pos+1);
           // cout<<p<<endl;
        }
        else {
            ok=0;break;
        }
    }
    }
    if(ok)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
}
