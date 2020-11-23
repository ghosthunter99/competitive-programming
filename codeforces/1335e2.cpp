#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    if(n==1){int c;cin>>c;cout<<1<<endl;continue;}
    else if(n==2){
            int x,y;
            cin>>x>>y;
            if(x!=y)cout<<1<<endl;
            else cout<<2<<endl;
            continue;
    }
    else{
        vector<int>v(n);
        vector<pair<int,int>>kk;
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        for(int i=0;i<n;i++){
            int l=i;
            while(v[l]==v[i] && l<n)l++;

            kk.push_back(make_pair(v[i],l-i));
        }
        if(kk.size()==1)cout<<kk.size()<<endl;
        else if(kk.size()==2)cout<<max(kk[0].second,kk[1].second)<<endl;
        else{
              int i=0,j=kk.size()-1;
              while(1){
                if(kk[i].first==kk[j].first){

                }
              }
        }

    }
}
