#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int>v(n+1);
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    for(int i=n;i>n/2;i--){
        cout<<-(v[i])<<" ";
    }
    for(int i=n/2;i>=1;i--){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
}
