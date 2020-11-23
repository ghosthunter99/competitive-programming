#include<bits/stdc++.h>
using namespace std;
const int mod=998244353;
const int N=3e5+5;
typedef long long ll;
int main(){
int n,m;
cin>>n>>m;

multiset<int>ml;
ml.insert(1);
ml.insert(2);
ml.insert(1);
ml.erase(ml.begin());
auto i=ml.end();
i--;
cout<<*i<<endl;
}
