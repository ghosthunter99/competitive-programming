#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
set<string>s;
int main(){
    int q,hudai;
    string ss,ans="",palin;
    cin>>q>>hudai;
    while(q--){
        cin>>ss;
        string rr=ss;
        reverse(rr.begin(),rr.end());
        if(rr==ss){
            palin=rr;
        }
        else if(s.count(rr)){
            ans+=rr;
        }
        s.insert(ss);
    }
    string rs=ans;
    reverse(rs.begin(),rs.end());
    cout<<palin.size()+ans.size()*2<<endl;
    cout<<rs+palin+ans<<endl;
}
