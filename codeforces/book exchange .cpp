#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int>v(n+1);
    for(int i=0;i<n;i++){
        cin>>v[i];
        v[i]--;
    }
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        if(ans[i])continue;
        int c=1;
        int x=v[i];
        while(x!=i){
            x=v[x];
            c++;
        }
        int k=i;
        for(int j=0;j<c;j++){
            ans[k]=c;
            k=v[k];
        }
    }
    for(int i=0;i<n;i++)cout<<ans[i]<<" ";
    cout<<endl;
}
}
