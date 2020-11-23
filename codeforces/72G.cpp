#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
int t;
cin>>t;
while(t--){
    int r,p,s,n,num;
    cin>>num>>r>>p>>s;
    int win=0,bobr=0,bobp=0,bobs=0;
    char bob[105];
    n=num;
    for(int i=0;i<n;i++){
        cin>>bob[i];
        if(bob[i]=='R')bobr++;
        if(bob[i]=='P')bobp++;
        if(bob[i]=='S')bobs++;
    }
    win+=min(r,bobs);
    n-=min(r,bobs);
    win+=min(p,bobr);
    n-=min(p,bobr);
    win+=min(s,bobr);
     n-=min(s,bobr);
     if(win*2>num)cout<<"YES"<<endl;
     else cout<<"NO"<<endl;
}
return 0;
}
