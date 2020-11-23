#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
cin>>s;
for(int i=0;i<s.size();i++){
    if(s[i]=='0' || s[i]=='8'){
        cout<<"YES"<<endl<<s[i];return 0;
    }
}

int n=s.size();
if(n==1){cout<<"N0"<<endl;return 0;}
if(n==2){
    int x=s[0]-'0';
    x*=10;
    x+=s[1]-'0';
    if(x%8==0)cout<<"YES"<<endl<<s[0]<<s[1]<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
vector<int>v(n);
for(int i=0;i<n;i++){
    v[i]=s[i]-'0';
}

for(int i=0;i+2<n;i++){
    for(int j=i+1;j<n-1;j++){
        for(int k=j+1;k<n;k++){
            if((v[i]*100+v[j]*10+v[k])%8==0){
                cout<<"YES"<<endl;
                cout<<v[i]<<v[j]<<v[k]<<endl;
                return 0;
            }
        }
    }
}
for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
        if((v[i]*10+v[j])%8==0){
            cout<<"YES"<<endl;
            cout<<v[i]<<v[j]<<endl;
            return 0;
        }
    }
}
cout<<"NO"<<endl;
return 0;
}
