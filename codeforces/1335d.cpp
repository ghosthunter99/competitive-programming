#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        map<int,int>repeat;
        set<int>dis;
        int mx=-1;
        for(int i=0;i<n;i++){
            cin>>v[i];
            repeat[v[i]]++;
            dis.insert(v[i]);
        }
        for(int i=0;i<n;i++){
            mx=max(mx,repeat[v[i]]);
        }
        int x=dis.size();
    cout<<max(min(mx,x-1),min(mx-1,x))<<endl;
}
}
