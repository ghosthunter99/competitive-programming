#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int>v(n);
    map<int,vector<int>>ase;
    for(int i=0;i<n;i++){
        cin>>v[i];
        ase[v[i]].push_back(i);
    }
    for(int i=0;i<n;i++){
        if(ase[v[i]].size()>1){
            for(int j=1;j<ase[v[i]].size();j++){
                if(ase[v[i]][j]-i>1){
                    cout<<"YES"<<endl;
                    goto here;
                }
            }
        }
    }
    cout<<"NO"<<endl;
    here:
        ;

}
return 0;
}
