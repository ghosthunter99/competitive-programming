#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
   string s;
   cin>>s;
   string r="",t="";
   for(int i=0;i<n;i++){
    if(i%2==0){
        r+='0';
        t+='1';
    }
    else{
        r+='1';
        t+='0';
    }
   }
   int diff=0;
   for(int i=0;i<n;i++){
     if(r[i]!=s[i])diff++;
   }
   int mx=0;
   for(int i=0;i<n;i++){
    if(t[i]!=s[i])mx++;
   }
   if(mx==diff)cout<<1<<endl;
   else cout<<min(mx,diff)<<endl;
}
}
