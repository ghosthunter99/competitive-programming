#include<bits/stdc++.h>
using namespace std;
int main(){
string s="a",t="aaaa";
if(t.find(s[0])!=string::npos){
            int pos=t.find(s[0]);
            t.erase(0,pos+1);
}
cout<<t<<endl;
}
