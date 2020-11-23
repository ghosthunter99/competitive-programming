#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mp make_pair
#define pii pair<int,int>
#define pll pair<ll,ll>
#define pi acos(-1)
#define sc(x) scanf("%d",&x)
#define scl(x) scanf("%lld",&x)
#define sc2(x,y) scanf("%d %d",&x,&y)
#define scl2(x,y) scanf("%lld %lld",&x,&y)
#define all(x)  x.begin(),x.end()
#define debug() cerr<<"LINE "<<__LINE__<<" >> ", printer()
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

int main(){
string s;
int n;
cin>>s;
sc(n);
unordered_map<char,int>mmp;
for(int i=0;i<s.size();i++){
    mmp[s[i]]++;
}
if(mmp.size()>n){
    cout<<-1<<endl;
    return 0;
}
multiset<pair<int,char>>v;
for(auto i: mmp){
    v.insert(mp(i.second,i.first));
}
while(v.size()<n){
    auto last=v.end();
    last--;
    pair<int,char>p=*last;
    int l1=(p.first)/2;
    int l2=p.first-l1;
    char ll=p.second;
    v.erase(last);
    v.insert({l1,ll});
    v.insert({l2,ll});
}
auto again=v.end();
again--;
pair<int,char>p=*again;
cout<<p.first<<endl;
string make="";
for(auto i: v){
    cout<<i.second;
}
}
