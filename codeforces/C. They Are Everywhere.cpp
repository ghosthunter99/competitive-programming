#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mp make_pair
#define pii pair<int,int>
#define pll pair<ll,ll>
#define pb push_back
#define pil pair<int,ll>
#define pli pair<ll,int>
#define pi acos(-1)
#define sc(x) scanf("%d",&x)
#define scl(x) scanf("%lld",&x)
#define sc2(x,y) scanf("%d %d",&x,&y)
#define scl2(x,y) scanf("%lld %lld",&x,&y)
#define all(x)  x.begin(),x.end()
#define debug() cerr<<"LINE "<<__LINE__<<" >> ", printer()
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

bool check(string s,int sz,int len){
cout<<len<<endl;
for(int i=0;i<s.size();i++){
   string st= s.substr(i,i+len);
   set<char>ss;
    for(int j=0;j<st.size();j++){
        ss.insert(st[j]);
    }
    cout<<ss.size()<<endl;
    if(ss.size()==sz)return 1;
    ss.clear();
}
return 0;
}

int main(){
int n;
sc(n);
string s;
cin>>s;
set<char>ch;
for(int i=0;i<n;i++){
    ch.insert(s[i]);
}
int l=1,h=n,ans=n;
while(l<=h){
    int mid=(l+h)/2;
    if(check(s,ch.size(),mid)){
        ans=min(ans,mid);
        cout<<"ys"<<endl;
        h=mid-1;
    }
    else l=mid+1;
}
cout<<ans<<endl;
}
