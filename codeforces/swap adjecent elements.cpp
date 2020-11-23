#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
string s;
cin>>s;
bool ok=1;
for(int i=0;i<n;i++){
    if(s[i]=='0'){
       int mx=*max_element(v.begin(),v.begin()+i+1);
       int mn=*min_element(v.begin()+i+1,v.end());
       if(mx>mn){
          //  cout<<mx<<" "<<mn<<endl;
            cout<<"NO"<<endl;
       return 0;
    }
    }
}
cout<<"YES"<<endl;
}
