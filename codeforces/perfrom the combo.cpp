#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n,m;
    cin>>n>>m;
    string s;
    cin>>s;
    vector<int>tries(m);
    for(int i=0;i<m;i++)cin>>tries[i];
    tries.push_back(n);
    sort(tries.begin(),tries.end());
    vector<long long >freq(26,0);
    for(int i=0;i<n;i++){
        int j=tries.end()-upper_bound(tries.begin(),tries.end(),i);
        freq[s[i]-'a']+=j;
    }
    for(int i=0;i<26;i++){
        cout<<freq[i]<<(i<25 ? ' ' : '\n');
    }
}
}
