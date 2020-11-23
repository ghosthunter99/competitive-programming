#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int>v(n+2);
    vector<int>cnt(n+2);
    for(int i=0;i<n;i++){
        cin>>v[i];
        cnt[v[i]]++;
    }
    int l=0,r=0,ans=0;
    for(int l=0;l<n-1;l++){
        int sum=0;
        for(int r=l;r<n;r++){
            sum+=v[r];
            if(l==r)continue;

            if(sum<=n){
                ans+=cnt[sum];
                cnt[sum]=0;
            }
            else break;
        }
    }
    cout<<ans<<endl;
}
return 0;
}
