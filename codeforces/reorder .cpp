#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n,m;
    cin>>n>>m;
    vector<int>v(n);
    int sum=0;
    for(int i=0;i<n;i++){
            cin>>v[i];
    sum+=v[i];
}
if(sum==m){
    cout<<"YES"<<endl;
}
 else cout<<"NO"<<endl;
}
}
