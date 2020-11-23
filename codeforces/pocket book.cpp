#include<bits/stdc++.h>
using namespace std;
const int mod=1000000007;
int main(){
int n,m;
cin>>n>>m;
vector<string>s(n);
for(int i=0;i<n;i++)cin>>s[i];
long long ans=1;
for(int i=0;i<m;i++){
    set<char>c;
    for(int j=0;j<n;j++){
        c.insert(s[j][i]);
    }
    ans=(1LL*ans*c.size())%mod;
}
cout<<ans<<endl;
return 0;
}
