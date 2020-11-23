#include<bits/stdc++.h>
using namespace std;
vector<long long>sq;
void make(){
for(int i=0;i<=100000;i++){
    sq.push_back(1LL*i*i);
}
}
int main(){
int n;
make();
cin>>n;
make();
vector<int>ssq,notsq;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    auto it=lower_bound(sq.begin(),sq.end(),x);
    if(it==sq.end())notsq.push_back(x);
    else {
        int pos=it-sq.begin();
        if(sq[pos]==x)ssq.push_back(x);
        else notsq.push_back(x);
    }
}
if(ssq.size()==n/2){
    cout<<0<<endl;
}
else if(ssq.size()>notsq.size()){
    int need=ssq.size()-n/2;
    sort(ssq.begin(),ssq.end());
    long long  ans=0;
    for(int i=1;i<=need;i++){
        if(ssq[ssq.size()-i]==0)ans+=2;
        else ans+=1;
    }
    cout<<ans<<endl;
}
else {
    vector<int>diff;
    int need=notsq.size()-n/2;
     for(int i=0;i<notsq.size();i++){
         int x=notsq[i];
         int j=lower_bound(sq.begin(),sq.end(),x)-sq.begin();
         if(j==0)diff.push_back(2);
         else if(j==sq.size())diff.push_back(x-sq[j-1]);
         else{
            diff.push_back(min(sq[j]-x,x-sq[j-1]));
         }
     }
     sort(diff.begin(),diff.end());
    long long  ans=0;
     for(int i=0;i<need;i++){
        ans+=diff[i];
     }
     cout<<ans<<endl;
}
}
