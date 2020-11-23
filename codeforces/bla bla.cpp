#include<bits/stdc++.h>
using namespace std;
struct info{
int a,b,c;
};
int main(){
    vector<pair<info,int>>v;
    for(int i=0;i<2;i++){
        info x;
        x.a=3,x.b=4,x.c=5;
        v.push_back(make_pair(x,4));
     }
     for(int i=0;i<2;i++){
        cout<<v[i].first.a<<" "<<v[i].first.b<<" "<<v[i].first.c<<" "<<v[i].second<<endl;
     }
}
