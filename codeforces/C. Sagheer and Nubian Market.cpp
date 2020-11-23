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

int n,s;
vector<int>itemsum,indexsum;
bool check(int len){
for(int i=len;i<=n;i++){
  int tot=itemsum[i]-itemsum[i-len]+len*(indexsum[i]-indexsum[i-len]);
  if(tot<=s)return 1;
}
return 0;
}

//86 96
//89 48 14 55 5 35 7 79 49 70 74 18 64 63 35 93 63 97 90 77 33 11 100 75 60 99 54 38 3 6 55 1 7 64 56 90 21 76 35 16 61 78 38 78 93 21 89 1 58 53 34 77 56 37 46 59 30 5 85 1 52 87 84 99 97 9 15 66 29 60 17 16 59 23 88 93 32 2 98 89 63 42 9 86 70 80
//Output
//2 62
//Answer
//3 71
//Checker Log/
//wrong answer 1st numbers differ - expected: '3', found: '2'
//close

int main(){
sc(n),sc(s);
vector<int>v(n+1);
itemsum.resize(n+1);
indexsum.resize(n+1);
for(int i=1;i<=n;i++){
    sc(v[i]);
        itemsum[i]=itemsum[i-1]+v[i];
        indexsum[i]=indexsum[i-1]+i;
}
int l=1,h=n,ans=0;
while(l<=h){
    int mid=(l+h)/2;
    if(check(mid)){
        ans=max(ans,mid);
        l=mid+1;
    }
    else h=mid-1;
}
if(ans==0){
    cout<<0<<" "<<0<<endl;
}
else{
    cout<<ans<<" ";
    int tott=1e9;
    for(int i=ans;i<=n;i++){
        tott=min(tott,itemsum[i]-itemsum[i-ans]+ans*(indexsum[i]-indexsum[i-ans]));
    }
  cout<<tott<<endl;
}
}
