#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int a,b,p;
    cin>>a>>b>>p;
    int l=0,r=n,mid,ans=0,last=0;
    while(r-l >1){
        mid =(l+r)/2;
        last=mid;
        for(int k=mid+1;k<n;k++){
            if(s[k]!=s[k-1]){
                if(s[k]=='A')ans+=a;
                else ans+=b;
                last=k;
            }
        }
        if(last!=n-1){
            if(s[last]=='A')ans+=a;
            else ans+=b;
        }

    }
}
