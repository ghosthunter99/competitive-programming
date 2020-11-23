#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
  //  set<int>s;
    vector<int>v;
    map<int,int>mp;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        mp[x]++;
        if(mp[x]==1){
            continue;
        }
        else v.push_back(x);
    }
    sort(v.begin(),v.end());
    long long sum=0;
    for(int i=0;i<v.size();i++){
               int pos1=111111111,pos2=11111111;
               bool ok1=0,ok2=0;
        for(int j=v[i]-1;j>=1;j--){
            if(mp[j]==0){
                pos1=j;
                ok1=1;
                break;
            }
        }
        for(int j=v[i]+1;j<=200;j++){
            if(mp[j]==0){
                pos2=j;
                ok2=1;
                break;
            }
        }
        if(abs(pos1-v[i])<=abs(pos2-v[i]) && ok1 && ok2){
            mp[pos1]=1;
            sum+=(abs(pos1-v[i]));
  // cout<<" K"<<v[i]<< " "<<pos1<<endl;
        }
        else if(abs(pos1-v[i])>abs(pos2-v[i]) && ok1 && ok2){
            mp[pos2]=1;
            sum+=(abs(pos2-v[i]));
          // cout<<"O"<<v[i]<<" "<<pos2<<endl;
        }
        else if(ok1 && !ok2){
            mp[pos1]=1;
            sum+=(abs(pos1-v[i]));
        }
        else if(!ok1 && ok2){
             mp[pos2]=1;
            sum+=(abs(pos2-v[i]));
        }

    }
    cout<<sum<<endl;
}
}
