#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int>s;
    s.insert(1);
    s.insert(2);
    map<int,int>m;
    m[1]=1;
    m[2]=2;
    for(auto i: s){
        cout<<m[i]<<endl;
    }
}
