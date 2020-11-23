#include<bits/stdc++.h>
using namespace std;
int main(){
int n,k;
cin>>n>>k;
string s;
cin>>s;
if(k==1){
    cout<<s<<endl;
    return 0;
}
int cnt=0;
int l=0,h=n-1;
while(l<n && h>=0 && (s[l]==s[0] && s[l]==s[h])){
   l++,h--,cnt++;
}
k--;
if(cnt==n){
    string add=s.substr(n-1,n);
    for(int i=0;i<k-1;i++)s+=add;
}
else{
    string add=s.substr(cnt);
    for(int i=0;i<k-1;i++)s+=add;
}
cout<<s<<endl;
return 0;
}
