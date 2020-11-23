#include<bits/stdc++.h>
using namespace std;
int main(){
int n,coin;
cin>>n>>coin;
vector<int>a(n);
int cnt=0;
multiset<int>cost;
for(int i=0;i<n;i++)cin>>a[i];
for(int i=0;i<n-1;i++){
    if(a[i]%2)cnt++;
    else cnt--;
    if(cnt==0)cost.insert(abs(a[i]-a[i+1]));
}
int ans=0;
while(!cost.empty() &&  *cost.begin()<=coin){
        //ans+=*cost.begin();
        coin-=*cost.begin();
        ans++;
        cost.erase(cost.begin());
}
cout<<ans<<endl;
return 0;
}
