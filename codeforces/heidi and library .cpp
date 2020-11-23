#include<bits/stdc++.h>
using namespace std;
const int maxx=400001;
vector<int>v[maxx];
set<int>st;
int main(){
int n,k;
cin>>n>>k;
vector<int>a(n);
for(int i=0;i<n;i++){
    cin>>a[i];
    v[a[i]].push_back(i);
}
for(int i=1;i<=n;i++){
    v[i].push_back(i+n);
}
int ans=0;
for(int i=0;i<n;i++){
    int nx=*upper_bound(v[a[i]].begin(),v[a[i]].end(),i);
    if(st.find(i)!=st.end()){
        st.erase(i);
        st.insert(nx);
        continue;
    }
    ans++;
    if(st.size()<k){
        st.insert(nx);
        continue;
    }
    st.erase(--st.end());
    st.insert(nx);
}
cout<<ans<<endl;
}
