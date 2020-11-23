#include<bits/stdc++.h>
using namespace std;
int n,l,r,x;
bool check(vector<int>ch){
long long sum=0;
sort(ch.begin(),ch.end());
for(int i=0;i<ch.size();i++){
    sum+=ch[i];
}
if(l<=sum && sum<=r && (ch[ch.size()-1]-ch[0])>=x)return 1;
else return 0;
}
int main(){
cin>>n>>l>>r>>x;
vector<int>v(n);
int ans=0;
for(int i=0;i<n;i++)cin>>v[i];
for(int i=0;i<(1<<n);i++){
        vector<int>ch;
    for(int j=0;j<n;j++){
        if(i & (1<<j)){
          ch.push_back(v[j]);
        }
    }
    if(check(ch))ans++;
}
cout<<ans<<endl;
return 0;
}
