#include<bits/stdc++.h>
using namespace std;
#define mk make_pair
bool cmp(pair<pair<int,int>,int> x ,pair<pair<int,int>,int>y){
return x.second>y.second;
}
int main(){
int n,m,k;
cin>>n>>m>>k;
vector<int>points(n);
for(int i=0;i<n;i++)cin>>points[i];
vector<pair<pair<int,int>,int >>extra(k);
for(int i=0;i<k;i++){
    cin>>extra[i].first.first>>extra[i].first.second>>extra[i].second;
    extra[i].first.first--;
    extra[i].first.second--;
}
sort(extra.begin(),extra.end(),cmp);
long long ans=0;
for(int i=0;i<(1<<n);i++){
    if(__builtin_popcount(i)==m){
        set<int>take;
        //cout<<i<<endl;
        long long mx=0;
        for(int j=0;j<n;j++){
            if(i&(1<<j)){
                mx+=points[j];
                take.insert(j);
            }
        }
        for(int last=0;last<k;last++){
            if(take.find(extra[last].first.first)!=take.end() && take.find(extra[last].first.second)!=take.end()){
                mx+=extra[last].second;
                take.erase(extra[last].first.first);
                take.erase(extra[last].first.second);
            }
        }
        ans=max(ans,mx);

    }
}
cout<<ans<<endl;
return 0;
}
