#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    string s;
    cin>>s;
    vector<int>rpos;
    for(int i=0;i<s.size();i++){
        if(s[i]=='R')rpos.push_back(i);
    }
    int x=s.size();
    if(rpos.size()==0)cout<<s.size()<<endl;
    else if(rpos.size()==1)cout<<max(rpos[0]+1,x-rpos[0])<<endl;
    else{
    int ans=rpos[0]+1;
    for(int i=1;i<rpos.size();i++){
        ans=max(ans,rpos[i]-rpos[i-1]);
    }
    cout<<max(ans,x-rpos[rpos.size()-1])<<endl;
    }
}
}
