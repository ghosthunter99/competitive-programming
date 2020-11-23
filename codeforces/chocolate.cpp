#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int prev=-1;
long long result=0;
for(int i=0;i<n;i++){
    int c;
    cin>>c;
    if(c==1){
        if(prev==-1)result=1;
        else{
            if(i-prev>1){
                result=result*1LL*(i-prev);
            }
        }
        prev=i;
    }
}
cout<<result<<endl;
return 0;
}
