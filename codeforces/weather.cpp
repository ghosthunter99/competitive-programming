#include<bits/stdc++.h>
using namespace std;
#define N 1000005
vector<int>v[N];
int main(){
int sum,n;
cin>>sum>>n;
vector<int>ans;
int checksum=0;
for(int i=1;i<=n;i++){
    for(int j=0;j<30;j++){
        if(i & 1<<j){
            ans.push_back(1<<j);
            checksum+=(1<<j);
            v[1<<j].push_back(i);
            break;
        }
    }
}
if(checksum<sum){
    cout<<-1<<endl;
    return 0;
}
sort(ans.begin(),ans.end());
vector<int>f;
while(sum){
    cout<<"here";
    auto magi=lower_bound(ans.begin(),ans.end(),sum);
    if(magi==ans.end()){
        magi--;
    }
    int j=magi-ans.begin();
    f.push_back(v[ans[j]].back());
    v[ans[j]].pop_back();
    sum-=ans[j];
    ans.erase(ans.begin()+j);
}
cout<<f.size()<<endl;
for(int i=0;i<f.size();i++){
    cout<<f[i]<<" ";
}
return 0;
}
