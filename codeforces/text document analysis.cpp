#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
    string s;
    cin>>s;
    int mx=0,cnt=0,i=0;
    while(1){
        if(i>=n)break;
        if(s[i]=='_'){
            while(s[i]=='_' && i<n)i++;
            if((s[i]>='a' && s[i]<='z' && i<n) || (s[i]>='A' && s[i]<='Z' && i<n) ){
                int j=i;
                while((s[j]>='a' && s[j]<='z' &&  j<n) || (s[j]>='A' && s[j]<='Z' &&  j<n))j++;


                 mx=max(mx,j-i);
                i=j;
               // cout<<i<<" "<<j<<endl;
            }
        }
        if(s[i]=='('){
          while(1){
            i++;
            while(s[i]=='_' && i<n)i++;
            //cout<<i<<endl;
            if( (s[i]>='a' && s[i]<='z' && i<n) || (s[i]>='A' && s[i]<='Z' && i<n ) ){
                int j=i;
                while((s[j]>='a' && s[j]<='z' && j<n) || (s[j]>='A' && s[j]<='Z' && j<n ))j++;
                if(j>i)cnt++;
                i=j;
            }
            if(s[i]==')'){
                i++;
                break;
            }
        }
           }
            if((s[i]>='a' && s[i]<='z' && i<n) || (s[i]>='A' && s[i]<='Z' && i<n) ){
                int j=i;
                while((s[j]>='a' && s[j]<='z' &&  j<n) || (s[j]>='A' && s[j]<='Z' &&  j<n))j++;


                mx=max(mx,j-i);
                i=j;
               //cout<<i<<" "<<j<<endl;
            }

    }
    cout<<mx<<" "<<cnt<<endl;
}
