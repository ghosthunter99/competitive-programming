#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
string checker="RGBRGB";
cin>>t;
while(t--){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    if(n==1){cout<<0<<endl;continue;}
   // int ans=INT_MAX;
        int diff=INT_MAX;
        for(int j=0;j<=n-k;j++){
            int dif1=0,dif2=0,dif3=0;
            for(int r=0;r<k;r++){
                if(s[j+r]!=checker[(r)%3])dif1++;
                if(s[j+r]!=checker[(1+r)%3])dif2++;
                if(s[j+r]!=checker[(2+r)%3])dif3++;
            }
          diff=min(diff,min(dif1,min(dif2,dif3)));
        }
       // ans=min(ans,diff);
    cout<<diff<<endl;
}
return 0;
}
