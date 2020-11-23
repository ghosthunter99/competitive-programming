#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
cin>>s;
int n=s.size();
int st=n-1;
while(s[st]!='e')st--;
string key=s.substr(st+1);
s=s.substr(0,st);
//cout<<"ami" <<s<<endl;
//cout<<key<<" tt" <<endl;
int kkey=0,pw=1;
for(int i=key.size()-1;i>=0;i--){
      kkey=(key[i]-'0')*pw+kkey;
      pw*=10;
}
cout<<kkey<<" yo" <<endl;
int sst=0;
while(s[sst]!='.')sst++;
cout<<sst<<endl;
string age=s.substr(0,sst),piche=s.substr(sst+1);
cout<<age<<" "<<piche<<kkey<<endl;
if(kkey==0){
    string ans=age+piche;
    int jabe=piche.size(),h=ans.size();
    for(int i=jabe;i>=1;i--){
        if(ans[h-1]!='0')break;
        ans.erase(ans[h-1]);
        h--;
    }
    cout<<ans<<endl;
}
if(piche.size()<kkey){
    string ans=age+piche;
    int barabo=kkey-piche.size();
    for(int i=1;i<=barabo;i++)ans+='0';
    cout<<ans<<endl;
}
else if(piche.size()==kkey){
    //while(piche[piche.size()-1]=='0')piche.erase(piche[piche.size()-1]);
    string ans=age+piche;
    while(ans[ans.size()-1]=='0')ans.erase(ans[ans.size()-1]);
    cout<<ans<<endl;
    return 0;
}
else{
    string ans=age+piche.substr(0,kkey)+'.'+piche.substr(kkey);
    cout<<ans<<endl;
}
}
//4.09336275522154223604344399571355118601483591618747e85
//ans =  40933627552215422360434439957135511860148359161874700000000000000000000000000000000000
